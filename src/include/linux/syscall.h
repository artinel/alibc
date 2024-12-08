#include<def.h>
#include<io/file.h>
#include<sys/signal.h>
#include<io/iovec.h>
#include<sys/time.h>
#include<sys/utsname.h>


#define	SYSCALL_READ  0x00
#define SYSCALL_WRITE  0x01
#define	SYSCALL_OPEN  0x02
#define	SYSCALL_CLOSE  0x03
#define	SYSCALL_STAT  0x04
#define	SYSCALL_FSTAT  0x05
#define	SYSCALL_LSTAT  0x06
#define	SYSCALL_POLL  0x07
#define	SYSCALL_LSEEK  0x08
#define	SYSCALL_MMAP  0x09
#define	SYSCALL_MPROTECT  0x0A
#define	SYSCALL_MUNMAP  0x0B
#define	SYSCALL_BRK  0x0C
#define	SYSCALL_IOCTL  0x10
#define	SYSCALL_PREAD64  0x11
#define	SYSCALL_PWRITE64  0x12
#define	SYSCALL_READV  0x13
#define	SYSCALL_WRITEV  0x14
#define	SYSCALL_ACCESS  0x15
#define	SYSCALL_PIPE  0x16
#define	SYSCALL_SELECT  0x17
#define	SYSCALL_NANOSLEEP  0x23
#define	SYSCALL_FORK  0x39
#define	SYSCALL_VFORK  0x3A
#define	SYSCALL_EXECVE  0x3B
#define	SYSCALL_EXIT  0x3C
#define	SYSCALL_KILL  0x3E
#define	SYSCALL_UNAME  0x3F
#define	SYSCALL_GETCWD  0x4F
#define	SYSCALL_CHDIR  0x50
#define	SYSCALL_FCHDIR  0x51
#define	SYSCALL_RENAME  0x52
#define	SYSCALL_MKDIR  0x53
#define	SYSCALL_RMDIR  0x54
#define	SYSCALL_CREAT  0x55
#define	SYSCALL_LINK  0x56
#define	SYSCALL_UNLINK  0x57
#define	SYSCALL_SYMLINK  0x58
#define	SYSCALL_READLINK  0x59
#define	SYSCALL_CHMOD  0x5A
#define	SYSCALL_FCHMOD  0x5B
#define	SYSCALL_CHOWN  0x5C
#define	SYSCALL_FCHOWN  0x5D
#define SYSCALL_LCHOWN 0x5E
#define SYSCALL_UMASK 0x5F

extern int64 syscall(unsigned int code, void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5);

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

int64 syscall_nanosleep(timespec_t* duration, timespec_t* remaining);

int64 syscall_fork();

int64 syscall_vfork();

int64 syscall_execve(const char* filename, const char* const* argv, const char* const* envp);

int64 syscall_exit(int error_code);

int64 syscall_kill(pid_t pid, signal_t signal);

int64 syscall_uname(utsname_t* buffer);

int64 syscall_getcwd(char* buffer, size_t size);

int64 syscall_chdir(const char* path);

int64 syscall_fchdir(file_t file);

int64 syscall_rename(const char* old_path, const char* new_path);

int64 syscall_mkdir(const char* path, mode_t mode);

int64 syscall_rmdir(const char* path);

int64 syscall_creat(const char* path, mode_t mode);

int64 syscall_link(const char* old_path, const char* new_path);

int64 syscall_unlink(const char* path);

int64 syscall_symlink(const char* target, const char* path);

int64 syscall_readlink(const char* path, char* buffer, size_t size);

int64 syscall_chmod(const char* path, mode_t mode);

int64 syscall_fchmod(file_t file, mode_t mode);

int64 syscall_chown(const char* filename, uid_t user, gid_t group);

int64 syscall_fchown(file_t file, uid_t user, gid_t group);

int64 syscall_lchown(const char* filename, uid_t user, gid_t group);

int64 syscall_umask(int mask);
