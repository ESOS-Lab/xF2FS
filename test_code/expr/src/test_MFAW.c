#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define F2FS_IOCTL_MAGIC		0xf5
#define F2FS_IOC_START_ATOMIC_WRITE	_IO(F2FS_IOCTL_MAGIC, 1)
#define F2FS_IOC_COMMIT_ATOMIC_WRITE	_IO(F2FS_IOCTL_MAGIC, 2)
#define F2FS_IOC_ADD_ATOMIC_FILE		_IO(F2FS_IOCTL_MAGIC, 3)
#define F2FS_IOC_START_ATOMIC_WRITE_FILES	_IO(F2FS_IOCTL_MAGIC, 4)
#define F2FS_IOC_COMMIT_ATOMIC_WRITE_FILES	_IO(F2FS_IOCTL_MAGIC, 5)
#define F2FS_IOC_END_ATOMIC_WRITE_FILES	_IO(F2FS_IOCTL_MAGIC, 6)
#define F2FS_IOC_START_VOLATILE_WRITE	_IO(F2FS_IOCTL_MAGIC, 7)
#define F2FS_IOC_RELEASE_VOLATILE_WRITE	_IO(F2FS_IOCTL_MAGIC, 8)
#define F2FS_IOC_ABORT_VOLATILE_WRITE	_IO(F2FS_IOCTL_MAGIC, 9)
#define F2FS_IOC_GARBAGE_COLLECT	_IO(F2FS_IOCTL_MAGIC, 10)
#define F2FS_IOC_WRITE_CHECKPOINT	_IO(F2FS_IOCTL_MAGIC, 11)
#define F2FS_IOC_DEFRAGMENT		_IO(F2FS_IOCTL_MAGIC, 12)
#define F2FS_IOC_MOVE_RANGE		_IOWR(F2FS_IOCTL_MAGIC, 13,	\
						struct f2fs_move_range)

#define PAGESIZE 4096

void main(void) {
	char* filename[5] = {"file1", "file2", "file3", "file4", "file5"};
	char* str_new = "DEADBEEF";
	char buf[PAGESIZE];
	int fd[5];
	int i;
	unsigned long af_list = 0;

	for(i = 0; i < 5; i++) {
		if ((fd[i] = open(filename[i], O_CREAT | O_WRONLY | O_EXCL | O_TRUNC, 0644)) < 0) {
			printf("File open error\n");
			exit(0);
		}
	}

	memset(buf, '.', PAGESIZE);
	buf[PAGESIZE - 1] = '\n';
	buf[PAGESIZE] = NULL;

	for(i = 0; i < 5; i++) {
		if (write(fd[i], buf, PAGESIZE) < 0) {
			printf("File write error\n");
			exit(0);
		}
	}

	printf("af_list = %lX\n", af_list);
	sleep(5);

	for(i = 0; i < 5; i++)
		ioctl(fd[i], F2FS_IOC_ADD_ATOMIC_FILE, &af_list);

	printf("af_list = %lX\n", af_list);
	ioctl(fd[0], F2FS_IOC_START_ATOMIC_WRITE_FILES, af_list);

	printf("Write files\n");
	for(i = 0; i < 5; i++) {
		lseek(fd[i], 0, SEEK_SET);
		write(fd[i], str_new, strlen(str_new));
	}

	sleep(5);

	printf("Commit fiies\n");
	ioctl(fd[0], F2FS_IOC_COMMIT_ATOMIC_WRITE_FILES, af_list);

	sleep(5);

	ioctl(fd[0], F2FS_IOC_END_ATOMIC_WRITE_FILES, af_list);

	for(i = 0; i < 5; i++)
		close(fd[i]);
}
