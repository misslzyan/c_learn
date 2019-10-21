#include <stdio.h>
#include <string.h>
int isP(char * s, int low , int high){  
    while(low<=high){
        if(*(s+low)!=*(s+high)){
            return 0;
        }
        low++;
        high--;
    }
    return 1;
}

char * longestPalindrome(char * s){
    int len = strlen(s);
    char r[1000];
    int lon = len;
    while(len >0){
        for(int i=0;s[i]!='\0'&&(i+len<=lon);i++){
            if((i+len<lon+1)&&isP(s,i,i+len-1))
            {    
            	s[i+len]='\0';
                 return s+i;
            }        
        }
        len--;
    }
    return s;
}

int main() {
	char s[1000] = "babad";
	char *res = longestPalindrome(s);
	printf("res:%s\n", res);
}