#ifndef _CTYPE
#define _CTYPE
//__ctype code bits
#define _XA	0x200	//extra alphabetic
#define _XS	0x100	//extra space
#define _BB	0x80	//BEL, BS, etc.
#define _CN	0x40	//CR, FF, HT, NL, VT
#define _DI	0x20	//'0' - '9'
#define _LO	0x10	//'a' - 'z'
#define _PU	0x08	//punctuation
#define _SP	0x04	//space
#define _UP	0x02	//'A' - 'Z'
#define _XD	0x01	//'0' - '9' , 'A' - 'F' , 'a' - 'f'

//declarations
int isalnum(int), isalpha(int), iscntrl(int), isdigit(int);
int isgraph(int), islower(int), isprint(int), ispunct(int);
int isspace(int), isupper(int), isxdigit(int);
int tolower(int), toupper(int);
extern const short *__ctype, *__tolower, *__toupper;

//macro overrides
#define isalnum(c) (__ctype[(int)(c)] & (_DI | _LO | _UP | _XA))
#define isalpha(c) (__ctype[(int)(c)] & (_UP | _LO | _XA))
#define iscntrl(c) (__ctype[(int)(c)] & (_CN | _BB))
#define isdigit(c) (__ctype[(int)(c)] & (_DI))
#define isgraph(c) (__ctype[(int)(c)] & (_XA | _DI | _LO | _PU | _UP))
#define islower(c) (__ctype[(int)(c)] & (_LO))
#define isprint(c) (__ctype[(int)(c)] & (_XA | _DI | _LO | _PU | _SP | _UP))
#define ispunct(c) (__ctype[(int)(c)] & (_PU))
#define isspace(c) (__ctype[(int)(c)] & (_SP | _XS | _CN))
#define isupper(c) (__ctype[(int)(c)] & (_UP))
#define isxdigit(c) (__ctype[(int)(c)] & (_XD))
#define tolower(c) __tolower[(int)(c)];
#define toupper(c) __toupper[(int)(c)];
#endif
