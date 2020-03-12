#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>

#include <sys/ioctl.h>

#define F2FS_IOCTL_MAGIC	0xf5
#define F2FS_IOC_START_ATOMIC_FILE	_IO(F2FS_IOCTL_MAGIC, 1)
#define F2FS_IOC_COMMIT_ATOMIC_FILE	_IO(F2FS_IOCTL_MAGIC, 2)

#define MAX_STR		256
#define BUF_SIZE	4096
#define MAX_IO		10

static long long get_current_utime(void)
{
	struct timeval current_time;
	gettimeofday(&current_time, NULL);
	return (current_time.tv_sec*1000000 + current_time.tv_usec);
}

int main(int argc, char *argv[])
{
	int i, j, ret, fd, total_size, io_size, n_io, is_atomic;
	char buf[BUF_SIZE], file_name[MAX_STR];
	off_t offsets[MAX_IO];
	long long start, end;

	/* Check arguments */
	if (argc < 4) {
		char err_msg[MAX_STR];
		sprintf(err_msg, "Usage: %s <Path> <Total Size> <IO Size> <# of IO> <fsync: 0 or atomic write: 1>\n", argv[0]);
		perror(err_msg);
		goto out;
	}

	/* Fill buffer */
	memset(buf, 0xff, BUF_SIZE);

	/* Get arguments */
	total_size = atoi(argv[2]);
	io_size = atoi(argv[3]);
	n_io = atoi(argv[4]);
	is_atomic = atoi(argv[5]);

	/* Open(Create) file */
	sprintf(file_name, "%s/datafile", argv[1]);
	fd = open(file_name, O_CREAT | O_RDWR, 0755);
	if (fd < 0) {
		printf("Error on open\n");
		goto out;
	}

	/* Fill file */
	for (i = 0; i<(total_size/BUF_SIZE); i++) {
		ret = write(fd, buf, BUF_SIZE);
		if (ret < 0) {
			perror("write() error\n");
			goto close_out;
		}
	}
	fsync(fd);

	/* Save offsets */
	for (i = 0; i<(io_size/BUF_SIZE); i++) {
		offsets[i] = rand() % (total_size/BUF_SIZE);

		for (j = 0; j<i; j++)
			if (offsets[i] == offsets[j])
				i--;
	}

	start = get_current_utime();
	
	/* Excute expr */
	for (i = 0; i<n_io; i++) {
		if (is_atomic)
			ioctl(fd, F2FS_IOC_START_ATOMIC_FILE, NULL);
		for (j = 0; j<(io_size/BUF_SIZE); j++) {
			ret = lseek(fd, offsets[j], SEEK_SET);
			if (ret < 0) {
				perror("lseek() error\n");
				goto close_out;
			}

			ret = write(fd, buf, BUF_SIZE);
			if (ret < 0) {
				printf("Error\n");
				goto out;
			}
		}

		if (is_atomic)
			ioctl(fd, F2FS_IOC_COMMIT_ATOMIC_FILE, 1);
		else
			fsync(fd);
	}

	end = get_current_utime();

	printf("Time: %lld usec, IOPS: %.2f IOPS\n", end-start, (float)n_io/((end-start)/1000000));

close_out:
	close(fd);
out:
	return 0;
}
