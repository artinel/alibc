#ifndef __TIMEVAL_STRUCT
#define __TIMEVAL_STRUCT
typedef struct timeval{
	long tv_sec; //seconds
	long tv_usec; //microseconds
}timeval_t;
#endif

#ifndef __TIMESPEC_STRUCT
#define __TIMESPEC_STRUCT
typedef struct timespec{
	long tv_sec; //seconds
	long tv_nsec; //nanoseconds
}timespec_t;
#endif
