/* bitcount: count 1 bits in x */
#include <stdio.h>
int bitcount(unsigned x)
{
	int b;
	for(b=0;x!=0;x>>=1){
		if(x&01){
			b++;
		}
	}
	return b;
}

int bitocunt2(unsigned x);
int main()
{
	int b = bitcount(-1);
	printf("%d\n", b);
	int c = bitocunt2(-1);
	printf("%d\n", c);
}

int bitocunt2(unsigned x)
{
	int b;
	for(b=0;x!=0;x&=x-1)
	{
		b++;
	}
	return b;
}