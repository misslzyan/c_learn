#include <stdio.h>
#include <stdlib.h>
#include "calc.h"
#define MAXOP 100
//extern int sp;
int main()
{
	int c;
	char s[MAXOP];
	double op2;
	while(((c = getop(s))!= EOF))
	{
		switch(c){
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop()+pop());
				break;
			case '*':
				push(pop()*pop());
				break;
			case '-':
				op2 = pop();
				push(pop()-op2);
				break;
			case '/':
				op2 = pop();
				if(op2 == 0.0)
					printf("error: zero is not devided\n");
				else
					push(pop()/op2);
				break;
			case '\n':
				printf("\t%g\n", pop());
				break;
			default:
				printf("error: unknown character:%d!\n",c);
				break;
		}
	}
//	printf("end:%d\n", sp);
	return 0;
}