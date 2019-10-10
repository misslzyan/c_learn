/*
实现库函数 strncpy、strncat 和 strncmp，它们最多对参数字符串中
的前 n 个字符进行操作。例如，函数 strncpy(s, t, n)将 t 中最多前
 n 个字符复制到 s 中。更详细的说明请参见附录 B。
*/
#include <stdio.h>
void strncpy(char *s, char *t, int n)
{
	int i;
	for(i = 0;i<n&&(*s++=*t++);i++);
}

void strncat(char *s, char *t, int n)
{
	while(*s++);
	s--;
	int i = 0;
	while(i<n&&(*s++=*t++))
	{
		i++;
	}
}

int strncmp(char *s, char *t, int n)
{
	int i;
	for(i=0;i<n&&(*s==*t)&&*s&&*t;s++,t++,i++);//\0跳出
	if(i==n||((!*s)&&(!*t))) // 比较了n个或者s和t都到达了最后一个字符
	{
		return 0;
	}
	return *s - *t;
}

int main()
{
	//test cpy
	char s[20] = "aaa";
	char *t = "abcdef";
	strncpy(s, t, 5);
	printf("r1:%s\n", s);
	strncpy(s, t, 6);
	printf("r2:%s\n", s);
	strncpy(s, t, 7);
	printf("r3:%s\n", s);
	char s1[40] = "aaa";
	strncat(s1, t, 5);
	printf("r4:%s\n", s1);
	strncat(s1, t, 6);
	printf("r5:%s\n", s1);
	strncat(s1, t, 7);
	printf("r6:%s\n", s1);
	char s2[30] = "abcz";
	char t2[20] = "abc";
	int r1 = strncmp(s2, t2, 3);
	printf("r7:%d\n", r1);
	r1 = strncmp(s2, t2, 4);
    printf("r8:%d\n", r1);
	return 0;
}