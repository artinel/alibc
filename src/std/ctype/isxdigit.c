//isxdigit function
#include<ctype.h>

int (isxdigit)(int c){
	return (__ctype[c] & (_XD));
}
