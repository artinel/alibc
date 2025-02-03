#undef assert //remove existing definition


#ifdef NDEBUG
#define assert(test) ((void)0) //Passive form
#else
void __assert(char*);
//macros
#define _STR(x) _VAL(x)
#define _VAL(x) #x
#define assert(test) ((test) ? (void)0 : __assert(__FILE__ ":" _STR(__LINE__) " " #test))
#endif
