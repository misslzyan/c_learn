/*
lower: convert input to lower case
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/*0 lower  1 upper default lower*/
int main(int argc, char *argv[])
{
	int lower = 0;
	if(argc>1)
		lower = atoi(*++argv);
	int c;
	while((c=getchar())!= EOF)
		if(lower)
			putchar(toupper(c));
		else
			putchar(tolower(c));
	return 0;
}