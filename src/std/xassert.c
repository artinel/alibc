//_Assert function
#include<assert.h>
#include<stdio.h>
#include<stdlib.h>

void _Assert(char* msg){
	//Print assertion message and abort
	fputs(msg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}
