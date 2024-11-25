#include<def.h>
#include<io/file.h>

typedef enum{
	SYSCALL_READ = 0x00,
	SYSCALL_WRITE = 0x01,
	SYSCALL_OPEN = 0x02,
	SYSCALL_CLOSE = 0x03,
	SYSCALL_EXIT = 0x3c
}syscall_code;

extern int64 syscall(syscall_code code, void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5);

int64 syscall_read(file_t file, char* buffer, size_t count);

int64 syscall_write(file_t file, const char* buffer, size_t count);

int64 syscall_open(const char* filename, flag_t flags, mode_t mode);

int64 syscall_exit(int error_code);

int64 syscall_close(file_t file);
