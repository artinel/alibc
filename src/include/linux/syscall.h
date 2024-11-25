#include<def.h>
#include<io/file.h>

typedef enum{
	SYSCALL_READ = 0x00,
	SYSCALL_WRITE = 0x01,
	SYSCALL_OPEN = 0x02,
	SYSCALL_CLOSE = 0x03,
	SYSCALL_STAT = 0x04,
	SYSCALL_FSTAT = 0x05,
	SYSCALL_LSTAT = 0x06,
	SYSCALL_EXIT = 0x3C
}syscall_code;

extern int64 syscall(syscall_code code, void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5);

int64 syscall_read(file_t file, char* buffer, size_t count);

int64 syscall_write(file_t file, const char* buffer, size_t count);

int64 syscall_open(const char* filename, flag_t flags, mode_t mode);

int64 syscall_close(file_t file);

int64 syscall_stat(const char* filename, filestat_t* stat);

int64 syscall_fstat(const char* filename, filestat_t* stat);

int64 syscall_lstat(const char* filename, filestat_t* stat);

int64 syscall_exit(int error_code);


