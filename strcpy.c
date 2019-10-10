/*
实现字符串的copy
*/

void strcpy_v1(char s[], char t[])
{
	for(int i = 0;t[i]!='\0';i++)
	{
		s[i]=t[i];
	}
}

void strcpy_v2(char *s, char *t)
{
	for(;*t!='\0';s++,t++)
	{
		*s = *t;
	}
}

void strcpy_v3(char *s, char *t)
{
	while((*s++=*t++)!='\0');
}

void strcpy_v4(char *s, char *t)
{
	while(*s++ = *t++);
}

int main()
{
	return 0;
}