#include <stdio.h>
int f(void){return 0;}

int main(void) {
	int c = f();
	printf("%d\n", c);
}