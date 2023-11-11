/*
Ex. 14.13
a) Show what the following program will look like after preprocessing. You may ignore
lines added to the program as a result of including the <stdio.h> header.
ANSWER: run a compiler with C preprocessor only (for clang and gcc use -E option, i.e
gcc ex14_13.c -E -o ex14.13E.c)
b) What will be the output of this program?
ANSWER: N is undefined
*/
#include <stdio.h>

#define N 100

void f(void);

int main(int argc, char *argv[])
{
	f();
#ifdef N
#undef N
#endif
    return 0;
}
void f() {
#if defined(N)	
	printf("N is %d\n", N);
#else
	printf("N is undefined\n");
#endif
}