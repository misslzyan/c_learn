#include <stdio.h>
char * intToRoman(int n) {
	char *res = malloc(16);
	int i = 0;
	while(n>0){
		if(n-1000>=0){
			res[i++] = 'M';
			n-=1000;
			continue;
		}
		if(n-900>=0){
			res[i++] = 'C';
			res[i++] = 'M';
			n-=900;
			continue;
		}
		if(n-500>=0){
			res[i++]='D';
			n-=500;
			continue;
		}
		if(n-400>=0){
			res[i++]='C';
			res[i++]='D';
			n-=400;
			continue;
		}
		if(n-100>=0){
			res[i++]='C';
			n-=100;
			continue;
		}
		if(n-90>=0){
			res[i++]='X';
			res[i++]='C';
			n-=90;
			continue;
		}
		if(n-50>=0){
			res[i++]='L';
			n-=50;
			continue;
		}
		if(n-40>=0){
			res[i++]='X';
			res[i++]='L';
			n-=40;
			continue;
		}
		if(n-10>=0){
			res[i++]='X';
			n-=10;
			continue;
		}
		if(n-9>=0){
			res[i++]='I';
			res[i++]='X';
			n-=9;
			continue;
		}
		if(n-5>=0){
			res[i++]='V';
			n-=5;
			continue;
		}
		if(n-4>=0){
			res[i++]='I';
			res[i++]='V';
			n-=4;
			continue;
		}
		if(n-1>=0){
			res[i++]='I';
			n-=1;
			continue;
		}
	}
	res[i]='\0';
	return res;
}
char * intToRoman2(int);

int main(){
	printf("%d:%s\n", 3, intToRoman(3));
	printf("%d:%s\n", 3, intToRoman2(3));
}

char * intToRoman2(int num) {
	static char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	static char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
	static char *handreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	static char *thousands[] = {"", "M", "MM", "MMM"};

	char *res = malloc(16);
	sprintf(res, "%s%s%s%s", thousands[num/1000], handreds[num/100%10], tens[num/10%10], ones[num%10]);
	return res;
}