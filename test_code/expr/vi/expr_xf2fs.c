#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/time.h>

#include <sys/ioctl.h>

#define F2FS_IOCTL_MAGIC                0xf5
#define F2FS_IOC_ADD_ATOMIC_FILE        _IO(F2FS_IOCTL_MAGIC, 16)
#define F2FS_IOC_START_ATOMIC_FILE_SET  _IO(F2FS_IOCTL_MAGIC, 17)
#define F2FS_IOC_COMMIT_ATOMIC_FILE_SET _IO(F2FS_IOCTL_MAGIC, 18)
#define F2FS_IOC_END_ATOMIC_FILE_SET    _IO(F2FS_IOCTL_MAGIC, 19)

#define RENAME_EXCHANGE (1 << 1)

#define MAX_FILE_NAME	200
#define MAX_OFFSETS	1000
#define MAX_BUF		524288		/* 512KB */
#define WRITE_SIZE	4096		/* 4KB */

unsigned long afg_key;

static long long get_current_utime(void)
{
	struct timeval current_time;
	gettimeofday(&current_time, NULL);
	return (current_time.tv_sec*1000000 + current_time.tv_usec);
}

int main(int argc, char *argv[])
{
	char *path;
	char orig_file_name[MAX_FILE_NAME], swp_file_name[MAX_FILE_NAME], buf[MAX_BUF];
	off_t offsets[MAX_OFFSETS];
	ssize_t file_size, written = 0, ret;
	int orig_fd, swp_fd, dir_fd;
	int num_pages, file_size_kb, i;
	long long start, end;
	int *pages_bitmap;

	/* Arguments check */
	if (argc != 4) {
		printf("Usage: %s <Path> <File size (KB)> <number of pages>\n", argv[0]);
		exit(-1);
	}

	/* Initialize arguments and local variables */
	path = argv[1];
	file_size_kb = atoi(argv[2]);
	num_pages = atoi(argv[3]);

	file_size = (ssize_t) file_size_kb * 1024;
	memset(buf, 0xff, MAX_BUF);

	if (185 < strlen(path)) {
		printf("path is too long\n");
		exit(-1);
	} else if (MAX_OFFSETS < num_pages) {
		printf("Too big num pages\n");
		exit(-1);
	}

	sprintf(orig_file_name, "%s/test_file", path);

	/* Initialize offsets */
	pages_bitmap = (int*)calloc(file_size/WRITE_SIZE, sizeof(int));
	for (i = 0; i<num_pages; i++) {
		off_t ofs = (rand()%file_size)/WRITE_SIZE;
		if (!pages_bitmap[ofs]) {
			offsets[i] = ofs*WRITE_SIZE;
			pages_bitmap[ofs] = 1;
		} else {
			i--;
			continue;
		}
	}
	free(pages_bitmap);

	/* Create and Fill a File and fsync() the file */
	orig_fd = open(orig_file_name, O_CREAT|O_RDWR, 0755);
	if (orig_fd < 0) {
		printf("open() error during open orig file\n");
		exit(-1);
	}

	while (written < file_size) {
		ret = write(orig_fd, buf, MAX_BUF);
		if (ret < 0) {
			printf ("write() error during create orig file\n");
			close(orig_fd);
			exit(-1);
		}
		written += ret;
	}
	written = 0;
	fsync(orig_fd);
	sync();

	ret = ioctl(orig_fd, F2FS_IOC_ADD_ATOMIC_FILE, &afg_key);

	start = get_current_utime();

	/* Modify pages as much as the number of pages in swp file and fsync() the swp file*/
	ret = ioctl(orig_fd, F2FS_IOC_START_ATOMIC_FILE_SET, afg_key);
	for (i = 0; i<num_pages; i++) {
		lseek(orig_fd, offsets[i], SEEK_SET);
		ret = write(orig_fd, buf, WRITE_SIZE);
		if (ret < 0) {
			printf("write() error during modifying pages\n");
			close(orig_fd);
			close(swp_fd);
			exit(-1);
		}
	}
	ret = ioctl(orig_fd, F2FS_IOC_COMMIT_ATOMIC_FILE_SET, afg_key);

	end = get_current_utime();
	ret = ioctl(orig_fd, F2FS_IOC_END_ATOMIC_FILE_SET, afg_key);

	printf("%lld ms\n", (end-start)/1000);

	close(orig_fd);

	return 0;
}
