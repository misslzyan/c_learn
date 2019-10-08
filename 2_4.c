/*squeeze(s1,s2) 将字符串S1中任何与字符串S2中字符匹配的字符都删除*/
#include <stdio.h>
void squeeze(char s[], char t[]){
	int i,j;
	int k=0;
	for(i=0;s[i]!='\0';i++){
		for(j=0;t[j]!='\0'&&s[i]!=t[j];j++){}
		if(t[j]=='\0'){
			s[k++]=s[i];
		}
	}
	s[k]='\0';
}

int main()
{
	char s1[] = "acdcdvwdaf";
	char s2[] = "sd";
	squeeze(s1, s2);
	printf("%s\n", s1);
	return 0;
}