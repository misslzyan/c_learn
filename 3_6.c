/*
修改itoa函数，使得该函数可以接收三个参数。
其中，第三个参数为最小 字段宽度。
为了保证转换后所得的结果至少具有第三个参数指定的最小宽度，
在必要时应在 所得结果的左边填充一定的空格。
*/
#include <stdio.h>
#include <string.h>
#include <limits.h>
void reverse(char s[])
{
	int i, j, c;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

void itoa(int n, char s[], int c)
{
	unsigned int x;
	int sign ;
	sign = n<0?-1:1;
	if(n<0&&n-1<0)//考虑最小值的溢出
	{
		x = -n;
	}
	else
	{
		x=n;
	}
	int i = 0;
	do
	{
		s[i++]=x%10+'0';
	}while((x/=10)>0);
	if(sign<0)
		s[i++] = '-';
	while(i<c)
	{
		s[i++]=' ';
	}
	s[i]='\0';
	reverse(s);
}
int main()
{
  int n = INT_MIN;
  printf("%d\n", n);
  printf("%d\n", -n);//会产生溢出
  printf("%d\n", n-1);//会产生溢出
  int b = 123;
  char s[] = "111111111111111111";
  itoa(b, s, 8);
  printf("%s\n", s);
  itoa(b, s, 8);
  printf("%s\n", s);
  itoa(n, s, 8);
  printf("%s\n", s);
  itoa(n, s, 8);
  printf("%s\n", s);
}