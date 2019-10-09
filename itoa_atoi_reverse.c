/*
itoa: convert n to characters in s 
atoi: 字符串转换为数字
reverse:倒置字符串
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void reverse(char s[]);

void itoa(int n, char s[])
{
	int i, sign;
	if((sign = n)< 0)
		n = -n;
	i =0;
	do
	{
		s[i++] = n%10+'0';
	} while ((n/=10)>0);
	if(sign<0)
		s[i++] = '-';
	s[i]='\0';
	reverse(s);
}

void reverse(char s[])
{
	int c, i, j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
     	c = s[i];
     	s[i] = s[j];
     	s[j] = c;
	}
}

int atoi(char s[])
{
	int i, n, sign;
	for(i=0; isspace(s[i]); i++)
	{
		;
	}
	sign = (s[i] == '-')? -1 : 1;
	if(s[i]=='+'||s[i]=='-')
		i++;
	for(n = 0;isdigit(s[i]);i++)
	{
		n = 10 * n + (s[i]-'0');
	}
	return sign * n;
}

int main()
{
	char s[] = "-123m";
	int n = atoi(s);
	printf("%d\n", n);
	itoa(n, s);
	printf("%s\n", s);
	return 0;
}

