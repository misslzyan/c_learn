/*
cat: concatenate files, version 1
*/
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("program_name:%s\n", argv[0]);
	char *prog = argv[0];
	FILE *fp;
	void filecopy(FILE *, FILE *);
	if(argc==1) 
		filecopy(stdin, stdout);
	else
		while(--argc>0){
			if((fp=fopen(*++argv, "r"))==NULL){
				fprintf(stderr, "%s can't open %s\n", prog, *argv);
				exit(1);
			} else {
				filecopy(fp, stdout);
				fclose(fp);
			}
		}
		if(ferror(stdout)){
			fprintf(stderr, "%s: error writing stdout\n", prog);
			exit(2);
		}
	return 0;
}

void filecopy(FILE *ifp, FILE *ofp)
{
	int c;
	while((c=getc(ifp))!=EOF)
		putc(c, ofp);
}