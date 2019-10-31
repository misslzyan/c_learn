#include <stdio.h>

int main(void){
	static int n = 5;
	if(--n){
		printf("%d\n", n);
		main();
		printf("exit\n");
	}
}