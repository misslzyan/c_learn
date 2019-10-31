#include <stdio.h>
#define MULTIPLY(x,y) x*y
#define MULTIPLY2(x,y) (x)*(y)
int main(){
	// 2+3*4+5=19
	printf("%d\n",MULTIPLY(2+3,4+5) );
	//(2+3)*(4+5)
	printf("%d\n", MULTIPLY2(2+3,4+5));
}