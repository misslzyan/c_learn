/*
编写函数 expand(s1, s2)，将字符串 s1 中类似于 a-z 一类的速记符号
在字符串 s2 中扩展为等价的完整列表 abc...xyz。该函数可以处理大小写字母和数字，
并可 以处理 a-b-c、a-z0-9 与-a-z 等类似的情况。作为前导和尾随的-字符原样排印。
*/
#include <stdio.h>
void expand(char s1[], char s2[])
{
	int i, j;
	for(i=0,j=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='-'&&i-1>=0&&s1[i+1]!='\0'&&s1[i-1]<s1[i+1])
		{
			j--;
			for(int k=0;k<s1[i+1]-s1[i-1];k++)
			{
				s2[j++] = s1[i-1]+k;
			}

		}
		else
		{
			s2[j++] = s1[i];
		}
	}
	s2[j]='\0';
}


int main()
{	
	char str[100];
	char str1[100];
	char str2[100];
	expand("a-d0-9",str);
	printf("%s\n",str);
	expand("A-Z",str1);
	printf("%s\n",str1);
	expand("a-c-f",str2);
	printf("%s\n",str2);
	return 0;
}
//————————————————
//版权声明：本文为CSDN博主「微雨流光」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/cerci0304/article/details/7692973