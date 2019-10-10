/*
版本的 getint 函数在到达文件结尾时返回 EOF，
当下一个输入不是数字时返回 0，当 输入中包含一个有意义的数字时返回一个正值。
1.过滤掉空白字符。
2.如果不是数字，直接返回0。
3.计算符号位。
4.过掉符号位。
5.计算数字。
6.如果末尾不是EOF结束符，需要回退回去读出来的字符。
7.返回下一个字符。
*/
#include <stdio.h>
#include <ctype.h>
#define MAXSIZE 100
static int bufp = 0;
static int val[MAXSIZE];
int getch()
{
	if(bufp>0)
		return val[--bufp];
	else 
		return getchar();
}

void ungetch(int c)
{
	if(bufp<MAXSIZE)
		val[bufp++]=c;
	else
		printf("buffer is full !\n");
}


int getint(int *pn)
{
	int c, sign;
	while(isspace(c=getch()));
	if(!isdigit(c)&&c!=EOF&&c!='+'&&c!='-')
	{
		ungetch(c);// c is not a number.
		return 0; 
	}
	sign = (c=='-')?-1:1;
	if(c=='+'||c=='-')
	{
		c = getch();
	}
	if(!isdigit(c))
	{
		ungetch(c);
		return 0;
	}

	for(*pn=0;isdigit(c);c=getch())
	{
		*pn = 10 * *pn +c-'0';
	}
	*pn *= sign;
	if(c!=EOF)
	{
		ungetch(c);
	}
    return c;	
}
int main()
{
	int c, b;
	while((b = getint(&c))!=EOF&&b != 0)
	{
		printf("val is : %d\n", c);
	}
	printf("%d\n", b);
	return 0;
}