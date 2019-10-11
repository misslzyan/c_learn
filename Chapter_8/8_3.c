#include <fcntl.h>
#include <stdio.h>
int main()
{
	int fd;
	// int open(char*, int , int );
	fd = open("8_2.c", O_RDONLY, 0);
	printf("%d\n", fd);
	fd = creat("8_4.c",0777);
	printf("%d\n", fd);
	return 0;
}