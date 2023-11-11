/*
Ex. 14.11
C programmers often use the fprintf function to write error messages:
fprintf(stderr, "Range error: index = %d\n", index);
stderr is C's "standard error" stream; the remaining arguments are the same as those
for printf, starting with the format string. Write a macro named ERROR that generates
the call of fprintf shown above when given a format string and the items to be displayed:
ERROR("Range error: index = %d\n", index);
*/
#include <stdio.h>

#define ERROR(format_string, ...) fprintf(stderr, format_string, __VA_ARGS__)

int main(int argc, char *argv[])
{
	//ERROR();/*error: expected expression before ‘,’ token*/
	//ERROR("Range error\n");/*error: expected expression before ‘)’ token*/
	//ERROR("", "");
	/*warning: zero-length gnu_printf format string	[-Wformat-zero-length]
	compiles and run but produces nothing but the warning above*/
	int index = 10;
	ERROR("Range error: index = %d\n", index);
	double value = 25.12;
	ERROR("Range error: index = %d, value = %lf\n", index, value);
	char name[100] = "screwdriver";
	ERROR("Range error: index = %d, value = %lf, name = %s\n", index, value, name);
    return 0;
}