/*
编写函数 itob(n, s, b)，将整数 n 转换为以 b 为底的数，并将转换结果
以字符的形式保存到字符串 s 中。例如，itob(n, s, 16)把整数 n 格式化成十六进制整数
 保存在s中。
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
void itob(int n, char s[], int b)
{
	unsigned x;
	int sign,mod;
	sign = n<0?-1:1;
	if(n<0&&n-1<0)
	{
		x = -n;
	}
	else
	{
		x = n;
	}
	int i = 0;
	do
	{
		mod = x%b;
		if(mod>9)
		{
			s[i++]=mod-10+'a';
		}
		else
		{
			s[i++]=mod+'0';
		}
	}while((x/=b)>0);
	if(sign<0)
		s[i++]='-';
	s[i]='\0';
	reverse(s);
}



//上述算法是处理不了最小的负数的。
int main()
{
 int n = 188;
 char s[] = "11111111111";
 itob(n, s, 16);
 printf("%s\n", s);
 itob(n, s, 10);
 printf("%s\n", s);
 itob(n, s, 8);
 printf("%s\n", s);
 itob(n, s, 2);
 printf("%s\n", s);
}