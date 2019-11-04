#include <stdio.h>
#include <stdlib.h>

int main1(){
	FILE *fp = fopen("file_t.c", "r");
	if(fp == NULL){
		printf("error\n");
		return -1;
	}
	int ret = fseek(fp, 0L, SEEK_SET);
	if(ret!=0){
		printf("error\n");
		return -1;
	}
	return 0;
}

int main2(){
	FILE *fp = fopen("file_t.c", "r");
	if(fp == NULL){
		printf("can't open file! \n");
		return (-1);
	}

	int ch = getc(fp);
	while(ch!=EOF){
		putchar(ch);
		ch = getc(fp);
	}

	if(feof(fp)){
		printf("End of the file reached!\n");
	}else{
		printf("Something went wrong ! \n");
	}
	fclose(fp);
	getchar();
	return 0;
}

int main(){
	FILE *fp = fopen("test.txt", "wx");
	if(fp == NULL){
		printf("Open file wrong !\n");
		exit(-1);
	} else {
		fputs("GeeksforGeeks", fp);
		puts("Done");
	}
	putchar('!');
	fclose(fp);
	return 0;
}