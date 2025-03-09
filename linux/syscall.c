#include <linux/syscall.h>
#include <stddef.h>
#include <stdint.h>

extern int64_t syscall(unsigned int code, void* arg0, void* arg1, void* arg2, void* arg3, void* arg4, void* arg5);
