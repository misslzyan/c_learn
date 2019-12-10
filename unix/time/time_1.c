#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
/*
int main (int argc , char **argv) {
	struct tm* ptr;
	time_t lt;
	lt = time(NULL);//获取当前时间戳
	ptr = localtime(&lt);//转换成本地时间的格式
	printf("%s\n",asctime(ptr) );
	ptr = gmtime(&lt);//转换为UTC时间的格式
	printf("%s\n",asctime(ptr) );//把时间格式化成字符串输出
	time_t start,end;
	clock_t start_c,end_c;
	start = time(NULL);
	start_c = clock();
	for(int i = 0; i < 100000; i++){

	}
	printf("\n");
	end = time(NULL);//单位是秒
	end_c = clock();//程序运行到现在经过的时间。
	printf("start:%ld\n", start);
	printf("end:%ld\n", end);
	printf("start_c:%ld\n", start_c);
	printf("end_c:%ld\n", end_c);
	printf("diff:%.9f\n", difftime(end, start));//秒内的差别，0

	return EXIT_SUCCESS;
}
*/
//clock_t的用法
/*
int frequency_of_primes(int n) 
{ 
    // This function checks the number of 
    // primes less than the given parameter 
    int i, j; 
    int freq = n - 1; 
    for (i = 2; i <= n; ++i) 
        for (j = sqrt(i); j > 1; --j) 
            if (i % j == 0) { 
                --freq; 
                break; 
            } 
    return freq; 
} 
int main(int argc, char **argv) {
	clock_t t;
	int f;
	t = clock();
	f = frequency_of_primes(9999);
	printf("The number of primes lower"
	        " than 10,000 is %d\n", f);
	t = clock() -t;
	printf("No. of clicks %ld clicks (%f seconds).\n",
	       t, ((float)t) / CLOCKS_PER_SEC);
	return EXIT_SUCCESS;

}*/
/*
Some format specifiers for strftime() are shown as follows :
%x = Preferred date representation
%I = Hour as a decimal number (12-hour clock).
%M = Minutes in decimal ranging from 00 to 59.
%p = Either “AM” or “PM” according to the given time value, etc.
%a = Abbreviated weekday name
%A = Full weekday name
%b = Abbreviated month name
%B = Full month name March
%c = Date and time representation
%d = Day of the month (01-31)
%H = Hour in 24h format (00-23)
%I = Hour in 12h format (01-12)
%j = Day of the year (001-366)
%m = Month as a decimal number (01-12)
%M = Minute (00-59)
*/
/*
%a	Abbreviated weekday name	Sun
%A	Full weekday name	Sunday
%b	Abbreviated month name	Mar
%B	Full month name	March
%c	Date and time representation	Sun Aug 19 02:56:02 2012
%d	Day of the month (01-31)	19
%H	Hour in 24h format (00-23)	14
%I	Hour in 12h format (01-12)	05
%j	Day of the year (001-366)	231
%m	Month as a decimal number (01-12)	08
%M	Minute (00-59)	55
%p	AM or PM designation	PM
%S	Second (00-61)	02
%U	Week number with the first Sunday as the first day of week one (00-53)	33
%w	Weekday as a decimal number with Sunday as 0 (0-6)	4
%W	Week number with the first Monday as the first day of week one (00-53)	34
%x	Date representation	08/19/12
%X	Time representation	02:50:06
%y	Year, last two digits (00-99)	01
%Y	Year	2012
%Z	Timezone name or abbreviation	CDT
%%	A % sign	%
*/

int main(int argc, char **argv) {
	time_t cur;
	cur = time(NULL);
	struct tm *tmp;
	tmp = localtime(&cur);
	char buffer[80];
	strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", tmp);
	printf("f:%s\n", buffer);
	return EXIT_SUCCESS;
}