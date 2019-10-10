/*
排序过程包括下列 3 个步骤:
  读取所有输入行
  对文本行进行排序
  按次序打印文本行
*/


#include <stdio.h>

#define MAXLINES 5000
static char *lineptr[MAXLINES];

int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);
void strcpy(char *s, char *t);
/* sort input lines*/
int main()
{
	int nlines;
	if((nlines = readlines(lineptr, MAXLINES))>=0){
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	} else {
		printf("error: input too big to sort\n");
		return 1;
	}
}
#define MAXLEN 1000
int getline_v1(char *, int);
char *alloc(int);
int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while((len = getline_v1(line, MAXLEN)) > 0){
		if(nlines >= maxlines || ((p = alloc(len)) == NULL))
			return -1;
		else {
			line[len-1] = '\0';/*delete new line*/
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	}
	return nlines;
}

/*writelines: write output lines*/
void writelines(char *lineptr[], int nlines)
{
	int i;
	for(i = 0;i<nlines;i++)
	{
		printf("%s\n", lineptr[i]);
	}
}

int getline_v1(char *s, int lim)
{
	int c, i;
	for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
	{
		*s++=c;
	}
	if(c=='\n'){
		*s++ = c;
		++i;
	}
	*s = '\0';
	return i;
}

void strcpy(char *s, char *t)
{
	while(*s++=*t++);
}

