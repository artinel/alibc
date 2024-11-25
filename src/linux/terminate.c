#include<linux/syscall.h>

void _terminate(int error_code){
	syscall_exit(error_code);
}
