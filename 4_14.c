/*
定义宏 swap(t, x, y)以交换 t 类型的两个参数。(使用程序块结构会对
你有所帮助。)
*/
#include <stdio.h>
#define swap(t, x, y) do{t temp = x;x=y;y=temp;}while(0)
int main()
{
	int a = 21,b=23;
	swap(int, a, b);
	printf("%d\t%d\n", a, b);
	return 0;
}