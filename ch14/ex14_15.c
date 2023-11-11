/*
Ex. 14.15
Suppose that a program needs to display messages in either English, French, or Spanish.
Using conditional compilation, write a program fragment that displays one of the
following three messages, depending on whether or not the specified macro is defined:
Insert Disk 1 (if ENGLISH is defined)
Inserez Le Disque 1 (if FRENCH is defined)
Inserte El Disco 1 (if SPANISH is defined)
*/
#include <stdio.h>

#define SPANISH

int main(int argc, char *argv[])
{
#if defined(ENGLISH)
	puts("Insert Disk 1");
#elif defined(SPANISH)
	puts("Inserte El Disco 1");
#elif defined(SPANISH)
	puts("Inserez Le Disque 1");
#endif
    return 0;
}