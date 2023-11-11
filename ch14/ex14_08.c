/*
Ex. 14.8
Suppose we want a macro that expands into a string containing the current line number
and file name. In other words, we'd like to write
	const char *str = LINE_FILE;
and have it expand into
	"Line 10 of file foo.c";
where foo.c is the file containing the program and 10 is the line on which the
invocation of LINE_FILE appears.
[Warning: This exercise is for experts only. Be sure to read the Q&A section carefully
before attempting!]
*/
#include <stdio.h>

#define INT2STR(x) STR(x)
#define STR(x) #x
#define LINE_FILE "Line "INT2STR(__LINE__)" of file "__FILE__

int main(int argc, char *argv[])
{
	const char *str = LINE_FILE;//"Line 21 of file foo.c"
	puts(str);
	puts(INT2STR(__LINE__));
    return 0;
}