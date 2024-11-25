#include<io/file.h>
#include<def.h>
#include<linux/syscall.h>

int64 syscall_read(file_t file, char* buffer, size_t count){
	return syscall(SYSCALL_READ, (void*)(unsigned long)file, buffer, (void*)count, NULL, NULL, NULL);
}

int64 syscall_write(file_t file, const char* buffer, size_t count){
	return syscall(SYSCALL_WRITE, (void*)(unsigned long)file, (void*)buffer, (void*)count, NULL, NULL, NULL);
}

int64 syscall_exit(int error_code){
	return syscall(SYSCALL_EXIT, (void*)(long)error_code, NULL, NULL, NULL, NULL, NULL);
}

int64 syscall_open(const char* filename, flag_t flags, mode_t mode){
	return syscall(SYSCALL_OPEN, (void*)filename, (void*)flags, (void*) mode, NULL, NULL, NULL);
}

int64 syscall_close(file_t file){
	return syscall(SYSCALL_CLOSE, (void*)(unsigned long)file, NULL, NULL, NULL, NULL, NULL);
}
