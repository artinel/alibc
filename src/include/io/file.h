typedef unsigned int file_t;

#ifndef FILE_STAT_STRUCT
#define FILE_STAT_STRUCT
typedef struct{
	unsigned short st_dev; //Device
	unsigned long st_ino; //File serial number
	unsigned int st_mode; //File mode
	unsigned int st_nlink; //Link count
	unsigned int st_uid; //User ID of the file owner
	unsigned int st_gid; //Group ID of the file group
	unsigned long st_rdev; //Device number, if device
	unsigned long __pad1;
	long st_size; //Size of file(bytes)
	int st_blksize; //Optimal block size for I/O
	int __pad2;
	long st_blocks; //Number 512-Byte blocks allocated
	long st_atime;	//Time of last access
	unsigned long st_atime_nsec;
	long st_mtime;	//Time of last modification
	unsigned long st_mtime_nsec;
	long st_ctime; //Time of last status change
	unsigned long st_ctime_nsec;
	unsigned int __unused4;
	unsigned int __unused5;
}filestat_t;
#endif

#ifndef FILE_POLL_FD_STRUCT
#define FILE_POLL_FD_STRUCT
typedef struct{
	file_t file;
	short events;
	short revents;
}pollfd_t;
#endif


/*
 *======================
 	File Flags
 *======================
 * */
//File access flags
#define F_RONLY	00000000
#define F_WONLY	00000001
#define F_RW	00000002
//File creaton flags
#define F_CLOEXEC	02000000
#define F_CREAT		00000100
#define F_DIRECTORY	00200000
#define F_EXEC		00000200
#define F_NOCTTY	00000400
#define F_NOFOLLOW	00400000
#define F_TRUNC		00004000
//File status flags
#define F_APPEND	00002000
#define F_ASYNC		00020000
#define F_DIRECT	00040000
#define F_SYNC		00010000
#define F_LARGEFILE	00100000
#define F_NOATIME	01000000
#define F_NOFOLLOW	00400000
#define F_NONBLOCK	00004000
#define F_NDELAY	F_NONBLOCK
//File mods
#define F_IRWXU		00700
#define F_IRUSR		00400
#define F_IWUSR		00200
#define F_IXUSR		00100
#define F_IRWXG		00070
#define F_IRGRP		00040
#define F_IWGRP		00020
#define F_IXGRP		00010
#define F_IRWXO		00007
#define F_IROTH		00004
#define F_IWOTH		00002
#define F_IXOTH		00001
#define F_ISUID		0004000
#define F_ISGID		0002000
#define F_ISVTX		0001000


