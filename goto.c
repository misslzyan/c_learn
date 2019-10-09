/*
  goto test
*/
#include <stdio.h>
int main()
{
	if(0)
		goto error;
	else
	{
		printf("%s\n", "not goto");
	}
	error:
	printf("%s\n", "error");
	printf("%s\n", "ok");

}