#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/time.h>

#include <sys/ioctl.h>

#define F2FS_IOCTL_MAGIC		0xf5
#define F2FS_IOC_ADD_ATOMIC_FILE	_IO(F2FS_IOCTL_MAGIC, 16)
#define F2FS_IOC_START_ATOMIC_FILE_SET	_IO(F2FS_IOCTL_MAGIC, 17)
#define F2FS_IOC_COMMIT_ATOMIC_FILE_SET	_IO(F2FS_IOCTL_MAGIC, 18)
#define F2FS_IOC_END_ATOMIC_FILE_SET	_IO(F2FS_IOCTL_MAGIC, 19)

#define MAX_THREADS	8
#define MAX_IO_SIZE_1K	128
#define MAX_TOTAL_SIZE_1K	128*1024
#define MAX_STR		200

static long long get_current_utime(void)
{
     struct timeval current_time;
     gettimeofday(&current_time, NULL);
     return (current_time.tv_sec*1000000 + current_time.tv_usec);
}

int num_threads = 0;
int io_size_1k = 0;
int total_size_1k = 0;
int fds[MAX_THREADS];
unsigned long afg_key;
char *buf;

void *thread_main(void *arg)
{
	int fd = fds[(long)arg];
	int written = 0, ret = 0;
	int io_size = io_size_1k * 1024;
	long long file_size = (long long) (total_size_1k / num_threads * 1024);

	while ((long long)written < file_size) {
		ret = write(fd, buf, io_size);
		if (ret < 0) {
			printf("write error\n");
			break;
		}
		written += ret;
	}

	return 0;
}

int main(int argc, char *argv[])
{
	long i, ret;
	long long start, end;

	if (argc != 5) {
		printf("Usage: %s <Path> <Total Size (KB)> <IO Size (KB)> <# of threads>\n", argv[0]);
		exit(-1);
	}

	total_size_1k = atoi(argv[2]);
	io_size_1k = atoi(argv[3]);
	num_threads = atoi(argv[4]);

	if (MAX_THREADS < num_threads) {
		printf("Too many threads\n");
		exit(-1);
	} else if (MAX_IO_SIZE_1K < io_size_1k) {
		printf("Too big io size\n");
		exit(-1);
	} else if (MAX_TOTAL_SIZE_1K < total_size_1k) {
		printf("Too big total size\n");
		exit(-1);
	}

	buf = (char*)malloc(io_size_1k*1024);
	memset(buf, 0xff, io_size_1k*1024);

	for (i = 0; i<num_threads; i++) {
		char file_name[MAX_STR];
		int fd;

		sprintf(file_name, "%s/file%ld", argv[1], i);
		fd = open(file_name, O_CREAT | O_RDWR, 0755);

		if (fd < 0) {
			printf("Error on open\n");
			goto out;
		}

		ret = ioctl(fd, F2FS_IOC_ADD_ATOMIC_FILE, &afg_key);
		if (ret) {
			printf("add error\n");
			goto out;
		}
		fds[i] = fd;
	}

	/* Start atomic write */
	ret = ioctl(fds[0], F2FS_IOC_START_ATOMIC_FILE_SET, afg_key);
	if (ret) {
		printf("start atomic file set error\n");
		goto out;
	}

	start = get_current_utime();
	printf("Start\n");

	for (i = 0; i<num_threads; i++) {
		thread_main((void*)i);
	}

	ret = ioctl(fds[0], F2FS_IOC_COMMIT_ATOMIC_FILE_SET, afg_key);
	if (ret) {
		printf("commit error\n");
		goto out;
	}

	end = get_current_utime();
	printf("end\n");

	printf("Total time: %lld ms\n", (end-start)/1000);

out:
	ioctl(fds[0], F2FS_IOC_END_ATOMIC_FILE_SET, afg_key);
	for (i = 0; i<num_threads; i++) {
		close(fds[i]);
	}
	exit(0);
}
