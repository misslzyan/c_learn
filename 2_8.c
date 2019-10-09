/*
编写一个函数 rightrot(x, n)，
该函数返回将 x 循环右移(即从最右端 移出的位将从最左端移入)n(二进制)位后所得到的值。
*/
#include <stdio.h>
unsigned rightrot(unsigned int x , int n){
	int i;
	for(i=1;i<=n;i++){
      int t = x&1;
      x = x >>1;
      if(t==1)
      {
      	x = ~(~0U>>1)|x;
      }
	}
	return x;
}

int main()
{
	unsigned int x = 2;
    x = rightrot(x, 10);
    printf("%u\n", x);
    return 0;
}