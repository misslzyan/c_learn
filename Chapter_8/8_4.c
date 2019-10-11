#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
int get(int fd, long pos, char *buf, int n)
{
	if(lseek(fd, pos, 0)>=0)
		return read(fd, buf, n);
	else 
		return -1;
}


int main(){

	int fd = open("8_3.c", O_RDONLY);
	char buf[200];
	if(get(fd, 20, buf, 4)>=0)
	{
		printf("res:%s\n", buf);
	} else {
		printf("error\n");
	}
	return 0;
}