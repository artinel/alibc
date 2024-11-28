#define SIGHUP	1	//hangup
#define SIGINT	2	//interrupt
#define SIGQUIT	3	//quit
#define SIGILL	4	//illegal instruction(not reset when caught)
#define SIGTRAP	5	//trace trap(not reset when caught)
#define SIGABRT	6	//abort
#define SIGFPE	8	//floating point exception
#define SIGKILL	9	//kill (cannot be caught or ignored)
#define SIGBUS	10	//bus error
#define SIGSEGV	11	//segmentation violation
#define SIGSYS	12	//bad argument to system call
#define SIGPIPE	13	//write on a pipe with no one to read it
#define SIGALRM	14	//alarm clock
#define SIGTERM	15	//signal termination signal from kill
#define SIGURG	16	//urgent condition no I/O channel
#define SIGSTOP	17	//sendable stop signal not from tty
#define SIGTSTP	18	//stop signal from tty
#define SIGCONT	19	//continue a stopped process
#define SIGCHLD	20	//to parent on child stop or exit
#define SIGTTIN	21	//to readers pgrp upon background tty read
#define SIGTTOU	22	//like TTIN for output if (tp->t_local&LTOSTOP)
#define SIGXCPU 24	//exceeded CPU time limit
#define SIGXFSZ	25	//exceeded file size limit
#define SIGVTALRM 26	//virtual time alarm
#define SIGPROF	27	//profiling time alarm
#define SIGUSR1	30	//user defined signal 1
#define SIGUSR2	31	//user defined signal 2

//#define SA_SIGINFO	0x0040	/* generate siginfo_t */

//#ifndef __SIGACTION_STRUCT
//#define __SIGACTION_STRUCT

//#define sa_handler __sigaction_u.__sa_handler
//#define sa_sigaction __sigaction_u.__sa_sigaction

/*typedef struct{
	//signal handler
	union{
		void (*__sa_handler)(int);
		void (*__sa_sigaction)(int, siginfo_t*, void*);
	}__sigaction_u;
}

#endif*/
