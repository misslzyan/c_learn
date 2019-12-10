#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char *countries[] = {
	"zh_CN"
};

int main(int argc, char **argv) {
	char *prog_name;
	if (argc > 0) {
		prog_name = argv[0];
		printf("prog_name is : %s\n", prog_name);
	}
    char *loc;
    int money = 100;
    loc = setlocale(LC_ALL, NULL);
    loc = setlocale(LC_ALL, "zh_CN");
    printf("The default locale is the %s\n", loc);
    char *cur;
    struct lconv *lcptr;
    lcptr = localeconv();
    cur = malloc(strlen(lcptr -> currency_symbol)+1);
    strcpy(cur, lcptr->currency_symbol);
    if(loc){
    	printf("Monetary figure for %s locale: %s%d\n",loc, cur,money);
    }
    free(cur);
    for (int i = 0; countries[i]; i++) {
    	loc = setlocale(LC_ALL, "zh_CN");
    	printf("The default locale is the %s\n", loc);
    }

    return EXIT_SUCCESS;
}