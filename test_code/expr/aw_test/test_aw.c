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

#define MAX_STR		256
#define MAX_FILES	100
#define IO_SIZE		4096

unsigned long afg_key;

int main(int argc, char *argv[])
{
	int i, ret, num_files;
	int fds[MAX_FILES];
	char buf[IO_SIZE];

	if (argc < 2) {
		printf("Usage: %s <path> <number of files>\n", argv[0]);
		exit(-1);
	}

	memset(buf, 0xff, IO_SIZE);

	num_files = atoi(argv[2]);

	for (i = 0; i<num_files; i++) {
		char file_name[MAX_STR];
		int fd;

		sprintf(file_name, "%s/file%d", argv[1], i);
		fd = open(file_name, O_CREAT | O_RDWR, 0755);

		if (fd < 0) {
			printf("Error on open\n");
			goto out;
		}

		//ret = ioctl(fd, F2FS_IOC_ADD_ATOMIC_FILE, &afg_key);
		if (ret) {
			printf("add error\n");
			goto out;
		}
		fds[i] = fd;
	}

	/* Start atomic write */
	//ret = ioctl(fds[0], F2FS_IOC_START_ATOMIC_FILE_SET, afg_key);
	ret = ioctl(fds[0], F2FS_IOC_START_ATOMIC_FILE_SET, NULL);
	if (ret) {
		printf("start atomic file set error\n");
		goto out;
	}

	for (i = 0; i<num_files; i++) {
		ret = write(fds[i], buf, IO_SIZE);
		if (ret < 0) {
			printf("Error\n");
			goto out;
		}
	}

	//ret = ioctl(fds[0], F2FS_IOC_COMMIT_ATOMIC_FILE_SET, afg_key);
	ret = ioctl(fds[0], F2FS_IOC_COMMIT_ATOMIC_FILE_SET, NULL);
	if (ret) {
		printf("commit error\n");
		goto out;
	}

out:
	//ioctl(fds[0], F2FS_IOC_END_ATOMIC_FILE_SET, afg_key);
	for (i = 0; i<num_files; i++) {
		close(fds[i]);
	}
	exit(0);
}
