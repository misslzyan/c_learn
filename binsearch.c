/*
 binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int binsearch(int x, int v[], int n)
{
	int low,high,mid;
    low = 0;
    high = n-1;
    while(low<=high){
    	mid = (low+high)/2;
    	if(v[mid]>x){
    		high = mid-1;
    	}else if(v[mid]<x){
    		low = mid+1;
    	}else{
    		return mid;
    	}
    }
    return -1;
}

int binsearch2(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n-1;
	while(low<=high){
		if(x>v[mid]){
			low = mid +1;
		}else{
			high = mid-1;
		}
	}
	if(v[mid]==x)
		return mid;
	if(v[low]==x)
		return low;
	if(v[high]==x)
		return high;
}

int main()
{
	int x;
	int v[] = {0, 10, 15, 25, 100, 200, 321, 333, 345, 500,
				501, 502, 503, 504, 505, 566, 589, 599, 600, 601,
				610, 620, 630, 640, 650, 660, 670, 680, 690, 699,
				710, 720, 730, 740, 750, 760, 770, 780, 790, 799,
				800, 810, 820, 830, 840, 850, 860, 870, 880, 890};
	clock_t begin, end;
	double  cost;
	begin = clock(); /* 开始计时 */

	x = 650; /* 要查找的数值 */
	printf("search %d...", x);
	printf("%d\n", binsearch(x, v, 50));

	end = clock(); /* 停止计时 */
	cost = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("%lf seconds\n", cost);
}