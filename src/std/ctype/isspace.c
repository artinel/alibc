//issapce function
#include<ctype.h>

int (isspace)(int c){
	return (__ctype[c] & (_SP | _CN | _XS));
}
