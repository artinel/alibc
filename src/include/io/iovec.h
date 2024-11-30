#include<def.h>

#ifndef __IOVEC_STRUCT
#define __IOVEC_STRUCT
struct iovec{
	addr_t* iov_base;
	size_t iov_len;
};
#endif
