/*
 month_name: return name of n-th month 
*/
#include <stdio.h>
char *month_name(int n)
{
	static char *name[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June", "July",
		"August", "September", "October"
		,"November", "December"
	};
	return name[n];
}

int main()
{
	int n = 4;
	printf("%s\n", month_name(n));
}