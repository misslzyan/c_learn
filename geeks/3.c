#include <stdio.h>
#define MULTIPLY(x,y) x*y
#define MULTIPLY2(x,y) (x)*(y)
#define MERGE(a,b,c) a##b##c
#define get(a) #a
#define print(i, limit) while(limit>0){\
       						printf("%d ",i);\
	                        limit--;\
                         }\
                         printf("\n");
#define square(x) x*x
#define square1(x) (x*x)
static inline int square2(int x) {return x*x;}
int main(){
	// 2+3*4+5=19
	printf("%d\n",MULTIPLY(2+3,4+5) );
	//(2+3)*(4+5)
	printf("%d\n", MULTIPLY2(2+3,4+5));
	printf("%d\n", MERGE(12,33,2));
	printf("%s\n", get(aaa));
	int i = 3;
	int data = 2;
	print(data,i);
	 //36/6*6=36
	printf("%d\n", 36/square(6));
	//36/(6*6)=1
	printf("%d\n", 36/square1(6));
	printf("%d\n", 36/square2(6));
#if VERBOSE >= 2
	printf("aaaaaa\n");
#endif
	printf("Current File : %s\n", __FILE__);
	printf("Current Date : %s\n", __DATE__);
	printf("Current Time : %s\n", __TIME__);
	printf("Line Number : %d\n", __LINE__);
	return 0;
}