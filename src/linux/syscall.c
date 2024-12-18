#include<linux/syscall.h>


#define PTR(x) (void*)x
#define PTR64(x) (void*)(unsigned long)x
#define PTR64S(x) (void*)(long)x

int64 syscall_read(file_t file, char* buffer, size_t count){
	return syscall(SYSCALL_READ, PTR64(file), buffer, PTR(count), NULL, NULL, NULL);
}

int64 syscall_write(file_t file, const char* buffer, size_t count){
	return syscall(SYSCALL_WRITE, PTR64(file), PTR(buffer), PTR(count), NULL, NULL, NULL);
}


int64 syscall_open(const char* filename, flag_t flags, mode_t mode){
	return syscall(SYSCALL_OPEN, PTR(filename), PTR64(flags), PTR64(mode), NULL, NULL, NULL);
}

int64 syscall_close(file_t file){
	return syscall(SYSCALL_CLOSE, PTR64(file), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_stat(const char* filename, filestat_t* stat){
	return syscall(SYSCALL_STAT, PTR(filename), stat, NULL, NULL, NULL, NULL);
}

int64 syscall_fstat(const char* filename, filestat_t* stat){
	return syscall(SYSCALL_FSTAT, PTR(filename), stat, NULL, NULL, NULL, NULL);
}

int64 syscall_lstat(const char* filename, filestat_t* stat){
	return syscall(SYSCALL_LSTAT, PTR(filename), stat, NULL, NULL, NULL, NULL);
}

int64 syscall_poll(pollfd_t* ufds, size_t nfds, int timeout){
	return syscall(SYSCALL_POLL, ufds, PTR(nfds), PTR64S(timeout), NULL, NULL, NULL);
}

int64 syscall_lseek(file_t file, off_t offset, flag_t whence){
	return syscall(SYSCALL_LSEEK, PTR64(file), PTR(offset), PTR64(whence), NULL, NULL, NULL);
}

int64 syscall_mmap(addr_t address, size_t length, flag_t prot, flag_t flags, file_t file, off_t offset){
	return syscall(SYSCALL_MMAP, PTR(address), PTR(length), PTR64(prot), PTR64(flags), PTR64(file), PTR(offset));
}

int64 syscall_mprotect(off_t start, size_t length, flag_t prot){
	return syscall(SYSCALL_MPROTECT, PTR(start), PTR(length), PTR64(prot), NULL, NULL, NULL);
}

int64 syscall_munmap(addr_t address, size_t length){
	return syscall(SYSCALL_MUNMAP, PTR(address), PTR(length), NULL, NULL, NULL, NULL);
}

int64 syscall_brk(addr_t address){
	return syscall(SYSCALL_BRK, PTR(address), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_ioctl(file_t file, unsigned int cmd, arg_t arg){
	return syscall(SYSCALL_IOCTL, PTR64(file), PTR64(cmd), PTR(arg), NULL, NULL, NULL);
}

int64 syscall_pread64(file_t file, char* buffer, size_t count, off_t offset){
	return syscall(SYSCALL_PREAD64, PTR64(file), PTR(buffer), PTR(count), PTR(offset), NULL, NULL);
}

int64 syscall_pwrite64(file_t file, const char* buffer, size_t count, off_t offset){
	return syscall(SYSCALL_PWRITE64, PTR64(file), PTR(buffer), PTR(count), PTR(offset), NULL, NULL);
}

int64 syscall_readv(file_t file, const struct iovec* vec, size_t length){
	return syscall(SYSCALL_READV, PTR64(file), PTR(vec), PTR(length), NULL, NULL, NULL);
}

int64 syscall_writev(file_t file, const struct iovec* vec, size_t length){
	return syscall(SYSCALL_WRITEV, PTR64(file), PTR(vec), PTR(length), NULL, NULL, NULL);
}

int64 syscall_access(file_t file, mode_t mode){
	return syscall(SYSCALL_ACCESS, PTR64(file), PTR64(mode), NULL, NULL, NULL, NULL);
}

int64 syscall_pipe(file_t files[2]){
	return syscall(SYSCALL_PIPE, files, NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_select(size_t nfds, fd_set_t* input, fd_set_t* output, fd_set_t* except, timeval_t* timeout){
	return syscall(SYSCALL_SELECT, PTR(nfds), input, output, except, timeout, NULL);
}

int64 syscall_nanosleep(timespec_t* duration, timespec_t* remaining){
	return syscall(SYSCALL_NANOSLEEP, duration, remaining, NULL, NULL, NULL, NULL);
}

int64 syscall_fork(){
	return syscall(SYSCALL_FORK, NULL, NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_vfork(){
	return syscall(SYSCALL_VFORK, NULL, NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_execve(const char* filename, const char* const* argv, const char* const* envp){
	return syscall(SYSCALL_EXECVE, PTR(filename), PTR(argv), PTR(envp), NULL, NULL, NULL);
}

int64 syscall_exit(int error_code){
	return syscall(SYSCALL_EXIT, PTR64S(error_code), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_kill(pid_t pid, signal_t signal){
	return syscall(SYSCALL_KILL, PTR64(pid), PTR64(signal), NULL, NULL, NULL, NULL);
}

int64 syscall_uname(utsname_t* buffer){
	return syscall(SYSCALL_UNAME, buffer, NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_getcwd(char* buffer, size_t size){
	return syscall(SYSCALL_GETCWD, buffer, PTR(size), NULL, NULL, NULL, NULL);
}

int64 syscall_chdir(const char* path){
	return syscall(SYSCALL_CHDIR, PTR(path), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_fchdir(file_t file){
	return syscall(SYSCALL_FCHDIR, PTR64(file), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_rename(const char* old_path, const char* new_path){
	return syscall(SYSCALL_RENAME, PTR(old_path), PTR(new_path), NULL, NULL, NULL, NULL);
}

int64 syscall_mkdir(const char* path, mode_t mode){
	return syscall(SYSCALL_MKDIR, PTR(path), PTR64(mode), NULL, NULL, NULL, NULL);
}

int64 syscall_rmdir(const char* path){
	return syscall(SYSCALL_RMDIR, PTR(path), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_creat(const char* path, mode_t mode){
	return syscall(SYSCALL_CREAT, PTR(path), PTR64(mode), NULL, NULL, NULL, NULL);
}

int64 syscall_link(const char* old_path, const char* new_path){
	return syscall(SYSCALL_LINK, PTR(old_path), PTR(new_path), NULL, NULL, NULL, NULL);
}

int64 syscall_unlink(const char* path){
	return syscall(SYSCALL_UNLINK, PTR(path), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_symlink(const char* target, const char* path){
	return syscall(SYSCALL_SYMLINK, PTR(target), PTR(path), NULL, NULL, NULL, NULL);
}

int64 syscall_readlink(const char* path, char* buffer, size_t size){
	return syscall(SYSCALL_READLINK, PTR(path), buffer, PTR(size), NULL, NULL, NULL);
}

int64 syscall_chmod(const char* path, mode_t mode){
	return syscall(SYSCALL_CHMOD, PTR(path), PTR64(mode), NULL, NULL, NULL, NULL);
}

int64 syscall_fchmod(file_t file, mode_t mode){
	return syscall(SYSCALL_FCHMOD, PTR64(file), PTR64(mode), NULL, NULL, NULL, NULL);
}

int64 syscall_chown(const char* filename, uid_t user, gid_t group){
	return syscall(SYSCALL_CHOWN, PTR(filename), PTR64(user), PTR64(group), NULL, NULL, NULL);
}

int64 syscall_fchown(file_t file, uid_t user, gid_t group){
	return syscall(SYSCALL_FCHOWN, PTR64(file), PTR64(user), PTR64(group), NULL, NULL, NULL);
}

int64 syscall_lchown(const char* filename, uid_t user, gid_t group){
	return syscall(SYSCALL_LCHOWN, PTR(filename), PTR64(user), PTR64(group), NULL, NULL, NULL);
}

int64 syscall_umask(int mask){
	return syscall(SYSCALL_UMASK, PTR64(mask), NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_gettimeofday(timeval_t* tv, timezone_t* tz){
	return syscall(SYSCALL_GETTIMEOFDAY, tv, tz, NULL, NULL, NULL, NULL);
}

int64 syscall_getrlimit(resource_t resource, rlimit_t* rlim){
	return syscall(SYSCALL_GETRLIMIT, PTR64(resource), rlim, NULL, NULL, NULL, NULL);
}

int64 syscall_getrusage(flag_t who, rusage_t* ru){
	return syscall(SYSCALL_GETRUSAGE, PTR64(who), ru, NULL, NULL, NULL, NULL);
}

int64 syscall_sysinfo(sysinfo_t* info){
	return syscall(SYSCALL_SYSINFO, info, NULL, NULL, NULL, NULL, NULL);
}
