#include<def.h>
#include<io/file.h>
#include<signal.h>
#include<io.h>
#include<time.h>

typedef enum{
	SYSCALL_READ = 0x00,
	SYSCALL_WRITE = 0x01,
	SYSCALL_OPEN = 0x02,
	SYSCALL_CLOSE = 0x03,
	SYSCALL_STAT = 0x04,
	SYSCALL_FSTAT = 0x05,
	SYSCALL_LSTAT = 0x06,
	SYSCALL_POLL = 0x07,
	SYSCALL_LSEEK = 0x08,
	SYSCALL_MMAP = 0x09,
	SYSCALL_MPROTECT = 0x0A,
	SYSCALL_MUNMAP = 0x0B,
	SYSCALL_BRK = 0x0C,
	SYSCALL_RT_SIGACTION = 0x0D,//TODO implement it
	SYSCALL_RT_SIGPROCMASK = 0x0E,//TODO implement it
	SYSCALL_RT_SIGRETURN = 0x0F,//TODO implement it
	SYSCALL_IOCTL = 0x10,
	SYSCALL_PREAD64 = 0x11,
	SYSCALL_PWRITE64 = 0x12,
	SYSCALL_READV = 0x13,
	SYSCALL_WRITEV = 0x14,
	SYSCALL_ACCESS = 0x15,
	SYSCALL_PIPE = 0x16,
	SYSCALL_SELECT = 0x17,
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

int64 syscall_poll(pollfd_t* ufds, size_t nfds, int timeout);

int64 syscall_lseek(file_t file, off_t offset, flag_t whence);

int64 syscall_mmap(addr_t address, size_t length, flag_t prot, flag_t flags, file_t file, off_t offset);

int64 syscall_mprotect(off_t start, size_t length, flag_t prot);

int64 syscall_munmap(addr_t address, size_t length);

int64 syscall_brk(addr_t address);

int64 syscall_ioctl(file_t file, unsigned int cmd, arg_t arg);

int64 syscall_pread64(file_t file, char* buffer, size_t count, off_t offset);

int64 syscall_pwrite64(file_t file, const char* buffer, size_t count, off_t offset);

int64 syscall_readv(file_t file, const struct iovec* vec, size_t length);

int64 syscall_writev(file_t file, const struct iovec* vec, size_t length);

int64 syscall_access(file_t file, mode_t mode);

int64 syscall_pipe(file_t files[2]);

int64 syscall_select(size_t nfds, fd_set_t* input, fd_set_t* output, fd_set_t* except, timeval_t* timeout);

int64 syscall_exit(int error_code);
