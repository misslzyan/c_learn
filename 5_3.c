/*
用指针方式实现第 2 章中的函数 strcat。
函数 strcat(s, t)将 t 指向 的字符串复制到 s 指向的字符串的尾部。
*/
#include <stdio.h>
void strcat(char *s, char *t)
{
	while(*s++);
	s--;
	while(*s++=*t++);
	return ;
}

int main()
{
	char s[20] = "abc";
	char *t = "cba";
	strcat(s, t);
	printf("res:%s\n", s);
	return 0;
}