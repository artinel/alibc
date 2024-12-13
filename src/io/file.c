#include<io/file.h>
#include<linux/syscall.h>

 stat_t filestat(file_t file, filestat_t* stat){
	if(file != 0){
		return syscall_fstat(file, stat);
	}
	//TODO add proper error code
	return -1;
}

size_t readf(file_t file, char* buffer, size_t count){
	if(count == 0 || file == 0)
		return 0;
	else{
		filestat_t stat;
		if(filestat(file, &stat) != -1){
			if(stat.st_size >= count)
				return syscall_read(file, buffer, count);
			else
				//TODO add proper error code
				return -1;
		}else{
			//TODO add proper error code
			return -1;
		}
	}
}
