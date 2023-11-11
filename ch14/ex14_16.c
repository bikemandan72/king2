/*
Ex. 14.16
Assume that the following macro definitions are in effect:
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)
What will the following line look like after macro expansion?
IDENT(foo)

ANSWER:
The following program is not intended to compile into binary. Use only preprocessor
option of your compiler to check the result, for example gcc ex14_16.c -E -o ex14.16E.c
*/
#include <stdio.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(int argc, char *argv[])
{
	IDENT(foo);
    return 0;
}