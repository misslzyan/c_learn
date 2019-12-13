/**
 * A simple program to compare different ways of getting your program's name.
 */
/*
mac上跑不通这段代码
*/
#include <stdio.h>
#include <stdlib.h>

extern char* __progname;
extern char* program_invocation_name;
extern char* program_invocation_short_name;

int main(int argc, char** argv)
{
    printf("argv[0]\n\t%s\n", argv[0]);
    printf("__progname\n\t%s\n", __progname);
    printf("program_invocation_name\n\t%s\n", program_invocation_name);
    printf("program_invocation_short_name\n\t%s\n", program_invocation_short_name);
    return 0;
}