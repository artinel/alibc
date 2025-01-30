//test assert macro
#define NDEBUG
#include<assert.h>
#include<signal.h>
#include<stdio.h>
#include<stdlib.h>

//static data
static int val = 0;

//handle SIGABRT
static void field_abort(int sig){
	if(val == 1){//expected result
		puts("Success testing <assert.h>");
		exit(EXIT_SUCCESS);
	}else{//unexpected result
		puts("Failure testing <assert.h>");
		exit(EXIT_FAILURE);
	}
}

//test dummy assert macro
static void dummy(){
	int i = 0;
	assert(i == 0);
	assert(i == 1);
}

#undef NDEBUG
#include<assert.h>

int main(){
	//test both dummy and working forms
	assert(signal(SIGABRT, &field_abort) != SIG_ERR);
	dummy();
	assert(val == 0); //should not abort
	++val;
	fputs("Sample assertion failure message --\n", stderr);
	assert(val == 0); //should abort
	fputs("Failure testing <assert.h>", stderr);
	return EXIT_FAILURE;
}
