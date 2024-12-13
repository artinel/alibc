#ifndef __ERROR_HEADER_INCLUDE
#warning "Do not include <linux/errno.h> directly. use <error.h> instead"
#endif

#define E_PERM		1	//Operation not permitted
#define E_NOFD		2	//No such file or directory
#define E_NOPROC	3	//No such process
#define E_INTR		4	//Interrupted system call
#define E_IO		5	//I/O error
#define E_NODEVADDR	6	//No such device or address
#define E_BIGARG	7	//Argument list too long
#define E_EXECFRMT	8	//Exec format error
#define E_BADFD		9	//Bad file descriptor
#define E_NOCHILD	10	//No Child process
#define E_RUNAVL	11	//Resource temporarily unavailable
#define E_NOMEM		12	//Cannot allocate memory
#define E_NOACCESS	13	//Permission denied
#define E_BADADDR	14	//Bad address
#define E_NOTBLK	15	//Block device required
#define E_BUSY		16	//Resource is busy
#define E_EXISTS	17	//File exists
#define E_INVXDEV	18	//Invalid cross device link
#define E_NODEV		19	//No such device
#define E_NOTDIR	20	//Not a directory
#define E_ISDIR		21	//Is a directory
#define E_INVARG	22	//Invalid argument
#define E_OPSFILES	23	//Too many open files on system
#define E_OPFILES	24	//Too many open files
#define E_INVIOCTL	25	//Inappropriate ioctl for device
#define E_TEXTBUSY	26	//Text file busy
#define E_BIGFILE	27	//File too big
#define E_NOSPACE	28	//No space left on device
#define E_ILLSEEK	29	//Illegal seek
#define E_ROFS		30	//Read-only file system
#define E_TOOLINK	31	//Too many links
#define E_BRKPIPE	32	//Broken pipe
#define E_DOMNARG	33	//Numerical argument out of domain
#define E_RNGNRES	34	//Numerical result out of range
#define E_RDEADLK	35	//Resource deadlock avoided
#define E_LONGFNAME	36	//File name too long
#define E_NOLOCK	37	//No lock available
#define E_NOFUNC	38	//Function not implemented
#define E_DIRNEMPTY	39	//Directory not empty
#define E_TOOSLINK	40	//Too many levels of symbolic links
#define	E_NOMSG		42	//No message of desires type
#define E_IDRM		43	//Identifier removed
#define E_CHNLNRNG	44	//Channel number out of range
#define E_LVL2NSYNC	45	//Level 2 not synchronized
#define E_LVL3HLT	46	//Level 3 halted
#define E_LVL3RESET	47	//Level 3 reset
#define E_LNKRNG	48	//Link number out of range
#define E_PRTDRVATCH	49	//Protocol driver not attached
#define E_NOCSI		50	//No CSI structure available
#define E_LVL2HLT	51	//Level 2 halted
#define E_INVEXCH	52	//Invalied exchange
#define E_INVREQDESC	53	//Invalude request descriptor
#define E_EXCHFULL	54	//Exchange full
#define E_NOANODE	55	//No anode
#define E_INVREQCODE	56	//Invalid request code
#define E_INVSLOT	57	//Invalid slot
#define E_BADFONT	59	//Bad font file format
#define E_NOSTRM	60	//Device not stream
#define E_NODATA	61	//No data available
#define E_TIMEEXPR	62	//Time expired
#define E_NOSTRMRES	63	//Out of stream resources
#define E_NONET		64	//Machine is not on the network
#define E_NOPKG		65	//Package not installed
#define E_OBJREMOTE	66	//Object is remote
#define E_NOLINK	67	//Link has been severed
#define E_ADV		68	//Advertise error
#define E_SRMNT		69	//Srmount error
#define E_COMMSEND	70	//Communication error on send
#define E_PROTOCOL	71	//Protocol error
#define E_MULTISHOP	72	//Multishop attempt
#define E_RFS		73	//RFS specific error
#define E_BADMSG	74	//Bad message
#define E_VAROVERFLOW	75	//Value too large for defined data type
#define E_NOTUNIQUE	76	//Name not unique on network
#define E_BADFDSTATE	77	//File descriptor in bad state
#define E_REMCHANGED	78	//Remote address changed
#define E_LIBACCESSS	79	//Cannot access a needed shared library
#define E_LIBBAD	80	//Accessing a corrupted shared library
#define E_LIBSEC	81	//.lib section in a.out corrupted
#define E_LIBLINK	82	//Attempting to link in too many shared libraries
#define E_LIBEXEC	83	//Cannot exec a shared library
#define E_MULTICHAR	84	//Invalid or incomplete multibyte or wide charecter
#define E_SCALLRESTART	85	//Interrupted system call should ve restarted
#define E_STRMPIPE	86	//Streams pipe error
#define E_USERS		87	//Too many users
#define E_NONSOCKET	88	//Socket operation no non-socket
#define E_DESTADDRREQ	89	//Destination address required
#define E_MSGLONG	90	//Message too long
#define E_PROTOTYPE	91	//Protocol wrong type for socket
#define E_PROTOAVAIL	92	//Protocol not  available
#define E_PROTOSUPPORT	93	//Protocol not supported
#define E_SOCKETSUPPORT	94	//Socket type not supported
#define E_OPERSUPPORT	95	//Operation not supported
#define E_PROTOFAMSUP	96	//Protocol family not supported
#define E_ADDRFAMSUP	97	//Address family not supported by protocol
#define E_ADDRINUSE	98	//Address already in use
#define E_ADDRNOTAVAIL	99	//Cannot assign requested address
#define E_NETDOWN	100	//Network is down
#define E_NETREACH	101	//Network is unreachable
#define E_NETRESET	102	//Network drop connection on reset
#define E_CONNABORTED	103	//Software caused connection abort
#define E_CONNRESET	104	//Connection reset by peer
#define E_NOBUFFER	105	//No buffer space available
#define E_TRANSENDCONN	106	//Transport endpoint is already connected
#define E_TRANSENDNCONN	107	//Transport endpoint is not connected
#define E_TRANSSHUTDOWN	108	//Cannot send after transport endpoint shutdown
#define E_TOOMANYREFS	109	//Too many references: cannot splice
#define E_CONNTIMEOUT	110	//Connection timed out
#define E_CONNREFUSED	111	//Connection refused
#define E_HOSTDOWN	112	//Host is down
#define E_HOSTUNREACH	113	//No route to host
#define E_OPERALRPROG	114	//Operation already in progress
#define E_OPERNOWPROG	115	//Operation now in progress
#define E_STALE		116	//Stale file handle
#define E_STRUCTCLEAN	117	//Structure needs cleaning
#define E_NOTXENIX	118	//Not a XENIX named type file
#define E_XENIXAVAIL	119	//No XENIX semaphores available
#define E_ISNAME	120	//Is a named type file
#define E_REMOTEIO	121	//Remote I/O error
#define E_DISKQUOTA	122	//Disk quota exceeded
#define E_NOMEDIUM	123	//No medium found
#define E_MEDIUMTYPE	124	//Wrong medium type
#define E_OPERCANCEL	125	//Operation cancelled
#define E_NOKEY		126	//Required key not available
#define E_KEYEXPIRED	127	//Key has expired
#define E_KEYREVOKED	128	//Key has been revoked
#define E_KEYREJECTED	129	//Key was rejected by service
#define E_OWNERDIES	130	//Owner died
#define E_NOTRECOVER	131	//State not recoverable
#define E_RFKILL	132	//Operation not possible due to RF-kill
#define E_MEMPAGE	133	//Memory page has hardware error
