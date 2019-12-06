#include <stdio.h>
#include <sys/types.h>
#include <signal.h>

#define initialize_main(x,y)
int main(){
	_wildcard("a","b");
	initialize_main(1,2);
	// int res = kill (2084, 9);
	// printf("%d", res);
	return 0;
}