#include <stdio.h>
#include <limits.h>
int myAtoi(char * str){
    while(*str==' ') str++;
    int sign = *str=='-'?-1:1;
    if(*str=='+'||*str=='-')
        str++;
     int n;
     int origin;
    for(n=0,origin=0;(*str>='0')&&(*str<='9')&&(*str);str++)
    {
        n = n*10+*str-'0';
        
        if(n<origin)
            return sign<0?  INT_MIN: INT_MAX;
        origin = n;
    }
    return n*sign;
}


int main(int argc, char const *argv[])
{
	int res = myAtoi("-91283472332");
	printf("%d\n", res);
	/* code */
	return 0;
}