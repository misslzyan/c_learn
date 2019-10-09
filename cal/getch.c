#include <stdio.h>
#include "calc.h"
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp = 0;
int getch()
{
	if(bufp>0)
		return buf[--bufp];
	else
		return getchar();
}
void ungetch(int c)
{
	if(bufp<BUFSIZE)
		buf[bufp++] = c;
	else 
		printf("buffer is full !\n");
}