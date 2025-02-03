//iscntrl function
#include<ctype.h>

int (iscntrl)(int c){
	return (__ctype[c] & (_CN | _BB));
}
