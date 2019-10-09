/*
编写函数escape(s,t)，将字符串t拷贝到字符串s中，并在拷贝过程中将诸如换行符与
制表符等等字符转换成诸如\n与\t等换码序列。使用switch语句。再编写一个具有相反功
能的函数，在拷贝过程中将换码序列转换成实际字符。
*/
/*只写了\t \n*/
#include <stdio.h>
void escape(char *s, char *t)
{
	int i,j;
	for(i=0,j=0;t[i]!='\0';t++)
	{
 		switch(t[i])
 		{
 			case '\n':
 					s[j++]='\\';
 					s[j++]='n';
 					break;
 			case '\t':
 					s[j++]='\\';
 					s[j++]='t';
 					break;
 			default:
 					s[j++]=t[i];
 					break;
 		}
	}
	s[j]='\0';
}

void unescape(char *t, char *s)
{
	int i,j;
	for(i=0,j=0;s[i]!='\0';i++)
	{
		if(s[i]=='\\')
		{
			switch(s[i+1])
			{
				case 't':
					t[j++]='\t';
					i++;
					break;
				case 'n':
					t[j++]='\n';
					i++;
					break;
				default:
				    t[j++] = s[i];
			}
		}
		else
		{
			t[j++]=s[i];
		}
	}
	t[j]='\0';
}

int main()
{
	char s[20], t[20] = "Can\t you?\n";
	escape(s, t);
	printf("转换前：%s\n", t);
	printf("转换后：%s\n", s);
	unescape(t, s);
	printf("转换回：%s\n", t);
	return 0;
}

