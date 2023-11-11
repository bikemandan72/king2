/*
Ex. 14.12
Suppose that the macro M has been defined as follows:
#define M 10
Which of the following will fail?
a) #if M
b) #ifdef M
c) #ifndef M
d) #if defined(M)
e) #if !defined(M)
*/
#include <stdio.h>

#define M 10

int main(int argc, char *argv[])
{
	#if M
		puts("a) doesn't fail.");
	#endif
	#ifdef M
		puts("b) doesn't fail.");
	#endif
	#ifndef M
		puts("c) doesn't fail.");
	#endif
	#if defined(M)
		puts("d) doesn't fail.");
	#endif
	#if !defined(M)
		puts("e) doesn't fail.");
	#endif
    return 0;
}