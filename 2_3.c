/*练习2-3 编写函数htoi(s),将十六进制数字组成的字符串（包含可选的前缀0x或0X）转换为与之等价的整型值。
字符串允许包含的数字包括：0~9、a~f、A~F。*/
#include <stdio.h>
int htoi(char s[]);
int main()
{
	int a = htoi("12");
	int b = htoi("0x1f");
	int c = htoi("0XAD");
	printf("十进制:%d, 十六进制:%#x\n",a,a);
	printf("十进制:%d, 十六进制:%#x\n",b,b);
    printf("十进制:%d, 十六进制:%#x\n",c,c);
    return 0;
}

int htoi(char s[])
{
	int i,sum = 0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]=='0'&&(s[i+1]=='x'||s[i+1]=='X')){
			i = i+1;
		}
		if(s[i]>='0'&&s[i]<='9'){
			sum = sum * 16 + s[i] - '0';
		}
		if(s[i]>='A'&&s[i]<='F'){
			sum = sum * 16 + s[i] + 10 - 'A';
		}
		if(s[i]>='a'&&s[i]<='f'){
			sum = sum * 16 + s[i] + 10 - 'a';
		}
	}
	return sum;
}