#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>

#include <sys/ioctl.h>

#define F2FS_IOCTL_MAGIC		0xf5
#define F2FS_IOC_START_ATOMIC_FILE	_IO(F2FS_IOCTL_MAGIC, 1)
#define F2FS_IOC_COMMIT_ATOMIC_FILE	_IO(F2FS_IOCTL_MAGIC, 2)

#define MAX_STR		256
#define IO_SIZE		4096

unsigned long afg_key;

static long long get_current_utime(void)
{
     struct timeval current_time;
     gettimeofday(&current_time, NULL);
     return (current_time.tv_sec*1000000 + current_time.tv_usec);
}

int main(int argc, char *argv[])
{
	int i, j, ret, fd;
	ssize_t written = 0;
	ssize_t total = 1*1024*1024;
	long long start[3], end[3];
	char file_name[MAX_STR];
	char buf[IO_SIZE];

	if (argc < 2) {
		printf("Usage: %s <path>\n", argv[0]);
		exit(-1);
	}

	srand(time(NULL));

	memset(buf, 0xff, IO_SIZE);

	sprintf(file_name, "%s/testfile", argv[1]);
	fd = open(file_name, O_CREAT | O_RDWR, 0755);

	if (fd < 0) {
		printf("Error on open\n");
		goto out;
	}

	while (written < total) {
		ret = write(fd, buf, IO_SIZE);
		if (ret < 0) {
			printf("write error\n");
			goto out;
		}
		written += ret;
	}

	fsync(fd);
	system("echo 3 > /proc/sys/vm/drop_caches");

	printf("File is created succesfully...\n");
	sleep(5);

	for (i = 0; i<1; i++) {
		/* Start atomic write */
		start[0] = get_current_utime();
		ret = ioctl(fd, F2FS_IOC_START_ATOMIC_FILE, NULL);
		if (ret) {
			printf("start atomic file set error\n");
			goto out;
		}
		end[0] = get_current_utime();

		start[1] = get_current_utime();
		for (j = 0; j<3; j++) {
			off_t ofs = rand()%(total/4096)*4096;
			lseek(fd, ofs, SEEK_SET);
			ret = write(fd, buf, IO_SIZE);
			if (ret < 0) {
				printf("Error\n");
				goto out;
			}
		}
		end[1] = get_current_utime();

		start[2] = get_current_utime();
		ret = ioctl(fd, F2FS_IOC_COMMIT_ATOMIC_FILE, NULL);
		if (ret) {
			printf("commit error\n");
			goto out;
		}
		end[2] = get_current_utime();
	}

	for (i = 0; i<3; i++)
		printf("%d: %lld\n", i, end[i] - start[i]);
out:
	close(fd);
	exit(0);
}
