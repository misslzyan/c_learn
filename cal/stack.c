#include <stdio.h>
#include "calc.h"
#define MAXVAL 100
static int sp =0;
static double val[MAXVAL];
void push(double a)
{
	if(sp<MAXVAL)
		val[sp++] = a;
	else
		printf("stack is full!\n");
}
double pop(void)
{
	if(sp>0)
		return val[--sp];
	else
		printf("stack is empty!\n");
}