/*练习 2-1 编写一个程序以确定分别由signed及unsigned 限定的char、short、
int与long类型变量的取值范围。采用打印标准头文件中的相应值以及直接计算两种方式实
现。后一种方法的实现较困难一些，因为要确定各种浮点类型的取值范围。*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() 
{
	printf("int(%d ~ %d)\n", INT_MIN, INT_MAX);
	printf("int(%d ~ %d)\n", 1<<(sizeof(int)*8-1), ~(1<<(sizeof(int)*8-1)));
	printf("uint int(%u ~ %u)\n", 0, UINT_MAX);
	printf("uint int(%u ~ %u)\n", 0, ~0);
	printf("char(%d ~ %d)\n", CHAR_MIN, CHAR_MAX);
	printf("char(%d ~ %d)\n", (char)(1<<(sizeof(char)*8-1)), ~(char)(1<<(sizeof(char)*8-1)));
	printf("uchar(%u ~ %u)\n", 0, UCHAR_MAX);
	printf("uchar(%u ~ %u)\n", 0, (unsigned char)~0);
	printf("short(%d ~ %d)\n", SHRT_MIN, SHRT_MAX);
	printf("short(%d ~ %d)\n", (short)(1<<(sizeof(short)*8-1)), (short)(~(1<<(sizeof(short)*8-1))));
	printf("ushort(%u ~ %u)\n", 0, USHRT_MAX);
	printf("ushort(%u ~ %u)\n", 0, (unsigned short)(~0));
	printf("long(%ld ~ %ld)\n", LONG_MIN, LONG_MAX);
	printf("long(%ld ~ %ld)\n", (long)((long)1<<(sizeof(long)*8-1)), (long)~((long)1<<(sizeof(long)*8-1)));
	printf("ulong(%lu ~ %lu)\n", (long)0, ULONG_MAX);
	printf("ulong(%lu ~ %lu)\n", (long)0, (unsigned long)(~(unsigned long)0));
}