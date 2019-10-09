/*
在数的对二的补码表示中，
我们编写的itoa函数不能处理最大的负数，
即 n 等于-2 字长-1 的情况。请解释其原因。
修改该函数，使它在任何机器上运行时都能打印出正确 的值
*/
/*
 解释：因为最大的负数执行 -n的时候，并不能得到并不能得到相应的正值。
*/
#include <stdio.h>
#include <limits.h>
#include <string.h>
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
void itoa2(int n, char s[])
{
	int i, sign;
	unsigned x;
	sign = n;
	if(n-1>0)
	{
		x = n;//绝对值一致，不变，只是把符号改变了。
	}
	else
	{
		x = -n;
	}
	i =0;
	do
	{
		s[i++] = x%10+'0';
	} while ((x/=10)>0);
	if(sign<0)
		s[i++] = '-';
	s[i]='\0';
	reverse(s);
}


//上述算法是处理不了最小的负数的。
int main()
{
  int n = INT_MIN;
  printf("%d\n", n);
  printf("%d\n", -n);//会产生溢出
  printf("%d\n", n-1);//会产生溢出
  int b = 123;
  char s[] = "111111111111111111";
  itoa(b, s);
  printf("%s\n", s);
  itoa2(b, s);
  printf("%s\n", s);
  itoa(n, s);
  printf("%s\n", s);
  itoa2(n, s);
  printf("%s\n", s);
}