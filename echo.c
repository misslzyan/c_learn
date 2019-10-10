/*
 echo command-line arguments; 1st version 
*/
#include <stdio.h>
int main1(int argc, char *argv[])
{
	int i;
	for(i=1;i<argc;i++)
	{
		printf("%s%s", argv[i], (i<argc-1)? " ":"");
	}
	printf("\n");
	return 0;
}

int main2(int argc, char *argv[])
{
	while(--argc > 0){
		printf("%s%s", *++argv, argc>0?" ":"");
	}
	printf("\n");
	return 0;
}

int main(int argc, char *argv[])
{
	while(--argc>0){
		printf(argc>0?"%s ":"%s", *++argv);
	}
	printf("\n");
	return 0;
}