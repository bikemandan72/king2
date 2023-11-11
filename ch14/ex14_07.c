/*
Ex. 14.7
Let GENERIC_MAX be the following macro:
#define GENERIC_MAX(type)			\
type type##_max(type x, type y) {	\
	(x > y) ? x : y;				\
}
a) Show the preprocessor's expansion of GENERIC_MAX(long).
b) Explain why GENERIC_MAX doesn't work for basic types such as unsigned long.
c) Describe a technique that would allow us to use GENERIC_MAX with basic types such as
unsigned long. [Hint: Don't change the definition of GENERIC_MAX.]

ANSWER: the solution is provided on the webpage knking.com
The following program is not intended to compile into binary. Use only preprocessor
option of your compiler to check the result, for example gcc ex14_07.c -E -o ex14.07E.c
*/
#include <stdio.h>

#define GENERIC_MAX(type)			\
type type##_max(type x, type y) {	\
	(x > y) ? x : y;				\
}
typedef unsigned long ULONG;
int main(int argc, char *argv[])
{
	GENERIC_MAX(unsigned long);
	GENERIC_MAX(ULONG);
	
    return 0;
}