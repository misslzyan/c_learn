/*
strcmp: return <0 if s<t, 0 if s==t, >0 if s>t
*/
#include <stdio.h>
int strcmp_v1(char *s, char *t)
{
	int i;
	for(i = 0; s[i] == t[i];i++)
	{
		if(s[i]=='\0')
			return 0;
	}
	return s[i] - t[i];
}

int strcmp_v2(char *s, char *t)
{
	for(;*s == *t;s++,t++)
	{
		if(*s=='\0')
		{
			return 0;
		}
	}
	return *s - *t;
}

int main()
{
	char *s = "abc";
	char *t = "bca";
	printf("%d\n", strcmp_v1(s, t));
	printf("%d\n", strcmp_v2(s, t));
}