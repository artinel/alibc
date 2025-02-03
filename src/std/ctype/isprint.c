//isprint function
#include<ctype.h>

int (isprint)(int c){
	return (__ctype[c] & (_XA | _DI | _LO | _PU | _SP | _UP));
}
