#include <stdio.h>
#include "calc.h"
#include <ctype.h>
int getop(char s[])
{
	int i, c;
	static int buf=-1;
	do
	{
		if(buf>0)
		{
			s[0]=c=buf;
			buf = -1;
		}
		else
		{
			s[0]=c=getch();
		}
	}while(c=='\t' || c == ' ');
	
	
	s[1] = '\0';
	if(!isdigit(c)&&c!='.')
	{
		return c;//not a number;
	}
	i = 0;
	if(isdigit(c))
	{
		while(isdigit(s[++i]=c = getch()))
		{
			;
		}
	}
	if(c=='.')
	{
		while(isdigit(s[++i]=c=getch()))
		{
			;
		}
	}
	s[i] = '\0';
	if(c!=EOF)
		buf = c;

	return NUMBER;
}