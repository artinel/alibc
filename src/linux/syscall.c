#include<io/file.h>
#include<def.h>
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

int64 syscall_exit(int error_code){
	return syscall(SYSCALL_EXIT, PTR64S(error_code), NULL, NULL, NULL, NULL, NULL);
}

