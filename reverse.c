/* reverse: reverse string s in place */
#include <string.h>
#include <stdio.h>
void reverse(char s[])
{
	int c, i, j;
	for(i=0,j=strlen(s)-1;i<j;i++,j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
int main()
{
	char s[] = "abcdef";
	reverse(s);
	printf("%s\n", s);
	return 0;
}