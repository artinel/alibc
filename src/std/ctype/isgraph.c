//isgraph function
#include<ctype.h>

int (isgraph)(int c){
	return (__ctype[c] & (_XA | _DI | _LO | _PU | _UP));
}
