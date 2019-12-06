#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv) {
	printf("argc:%d\n",argc);
	while(argc > 0){
	  fputs(argv[0], stdout);
	  argc--;
	  argv++;
	  if(argc > 0){
	  	putchar(' ');
	  }
	}
	return EXIT_SUCCESS;
}