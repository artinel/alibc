typedef unsigned int resource_t;
typedef unsigned int rlim_t;

#define RUSAGE_SELF 0
#define RUSAGE_CHILDREN -1
#define RUSAGE_THREAD 1

#ifndef __RESOURCE_RLIMIT_STRUCT
#define __RESOURCE_RLIMIT_STRUCT
typedef struct rlimit{
	rlim_t rlim_cur; //Soft limit
	rlim_t rlim_max; //Hard limit
}rlimit_t;
#endif

#ifndef __RESOURCE_RUSAGE_STRUCT
#define __RESOURCE_RUSAGE_STRUCT
typedef struct rusage{
	timeval_t ru_utime; //User CPU time used
	timeval_t ru_stime; //System CPU time used
	long ru_maxrss; //Maximum resident set size
	long ru_ixrss; //integral shared memory size
	long ru_idrss; //integral unshared data size
	long ru_isrss; //integral unshared stack size
	long ru_minflt; //page reclaims (soft page faults)
	long ru_majflt; //page faults (hard page faults)
	long ru_nswap; //swaps
	long ru_inblock; //block input operations
	long ru_outblock; //block output operations
	long ru_msgsnd; //IPC message sent
	long ru_msgrcv; //IPC message received
	long ru_nsignals; //signals received
	long ru_nvcsw; //voluntary context switches
	long ru_nivcsw; //involuntary context switches
}rusage_t;
#endif
