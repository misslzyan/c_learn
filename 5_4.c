/*
编写函数 strend(s, t)。
如果字符串 t 出现在字符串 s 的尾部，该函数 返回 1;否则返回 0。
*/
#include <stdio.h>
int strend(char *s, char *t)
{
	char *o = t;
	while(*s++);
	while(*t++);
	s--;
	t--;
	while(o<=t)
	{
		if(*s!=*t)
		{
			return 0;
		}
		s--;
		t--;
	}
	return 1;
}

int main()
{
	int res = strend("abc", "bca");
	printf("res:%d\n", res);
}