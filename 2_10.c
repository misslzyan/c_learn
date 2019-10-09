/*
重新编写将大写字母转换为小写字母的函数lower，并用条件表达式替代其 中的 if-else 结构。
*/
#include <stdio.h>
int lower(int c)
{
	return (c>='A'&&c<='Z')?c+'a'-'A':c;
}

int main()
{
	char c = 'A';
	printf("%c\n", lower(c));
	char m = 'Z';
	printf("%c\n", lower(m));
	char n = 'b';
	printf("%c\n", lower(n));
}