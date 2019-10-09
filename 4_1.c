/*
编写函数 strindex(s, t)，
它返回字符串 t 在 s 中最右边出现的位置。 如果 s 中不包含 t，则返回-1。
*/
#include <stdio.h>
#include <string.h>
int strindex(char s[], char t[])
{
	int i,j,k;
	for(i = strlen(s)-1;i>=0;i--)
	{
		for(j=strlen(t)-1,k=i;j>=0&&k>=0&&t[j]==s[k];j--,k--)
		{;}
		if(j<0)
		{
			return k+1;
		}
	}
	return -1;
}

int main()
{
	char s[]="abcbc";
	char t[]="bc";
	int b = strindex(s, t);
	printf("%d\n", b);
}