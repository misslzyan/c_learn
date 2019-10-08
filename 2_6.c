/*
编写一个函数 setbits(x, p, n, y)，
该函数返回对 x 执行下列操作后 的结果值:
将 x 中从第 p 位开始的 n 个(二进制)位设置为 y 中最右边 n 位的值，
x 的其余 各位保持不变。
*/
//从右边 数第 p 位开始向右数 n 位的字段
#include <stdio.h>
unsigned int setbits(unsigned int x, int p, int n, unsigned int y)
{
	return (x&(~((~(~0<<n))<<(p+1-n))))|(y&(~(~0<<n)))<<(p+1-n);
}

int main()
{
	unsigned int b = setbits(0x9a, 4, 3, 0x35);
	printf("%d\n", b);
}