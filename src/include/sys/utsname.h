#ifndef __UTSNAME_STRUCT
#define __UTSNAME_STRUCT
#define __UTSNAME_BUFF_SIZE 256
typedef struct utsname{
	char sysname[__UTSNAME_BUFF_SIZE]; //Operating system name
	char nodename[__UTSNAME_BUFF_SIZE]; //Name within the communications network to which the node is attached, if any
	char release[__UTSNAME_BUFF_SIZE]; //Operating system release
	char version[__UTSNAME_BUFF_SIZE]; //Operating system version
	char machine[__UTSNAME_BUFF_SIZE]; //Hardware type identifier
}utsname_t;
#endif
