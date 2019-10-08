/*
编写一个函数 invert(x, p, n)，
该函数返回对 x 执行下列操作后的结 果值:
将 x 中从第 p 位开始的 n 个(二进制)位求反(即，1 变成 0，0 变成 1)，x 的其余各 位保持不变。

*/
//从右边 数第 p 位开始向右数 n 位的字段
#include <stdio.h>
unsigned int invert(unsigned int x, int p, int n)
{
	return x ^ ~(~0<<n)<<(p+1-n);
}

int main()
{
    unsigned int x = 105;
    unsigned int y;
    int p = 5;
    int n = 3;
    y = invert(x, p, n);
    printf("%d\n", y);  //y应为81
    return 0;
}
/*
这个题目的答案我也是参考的书上的答案，自己写估计是想不出这个比较简单的方法来的，这个方法是利用了求异或(^)的操作，原理是：
1.假设某一位和0进行异或，那么如果这一位是0，结果是0，如果这一位是1，结果是1；
2.假设某一位和1进行异或，那么如果这一位是0，结果是1，如果这一位是1，结果是0。
————————————————
版权声明：本文为CSDN博主「taolusi」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/taolusi/article/details/52452609
*/
