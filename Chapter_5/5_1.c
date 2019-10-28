#include <stdio.h>
int strlen1(char* ch) {
	int len = 0;
	for(;*ch!='\0';ch++){
		len++;
	}
	return len;
}

int main() {
	char a[] = {'a', 'b','\0'};
	char * p = a;
	char * m = &a[0];
	char * n = &a[1];
	char * l = a+1;
	char * o = p+1;
	printf("%d\n", strlen1(a));
	printf("%d\n", strlen1(p));
	printf("%d\n", strlen1(m));
	printf("%d\n", strlen1(m));
	printf("%d\n", strlen1(l));
	printf("%d\n", strlen1(o));
}