/*
ShellSort is mainly a variation of Insertion Sort.
 In insertion sort, we move elements only one 
 position ahead. When an element has to be moved far ahead, 
 many movements are involved. The idea of shellSort is to 
 allow exchange of far items. In shellSort, we make the array h-sorted 
 for a large value of h. We keep reducing the value of h until it
  becomes 1. An array is said to be h-sorted if all sublists 
  of every h’th element is sorted.

Following is the implementation of ShellSort.
*/
#include <stdio.h>
void shellsort(int v[], int n)
{
	int gap, i, j, temp;
	for(gap = n/2; gap > 0; gap /= 2)
	{
		for(i=gap; i < n; i++)
		{
			for(j = i-gap;j>=0&&v[j]>v[j+gap];j-=gap)
			{
				int temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
		}
	}
}
void printArray(int v[], int n)
{
	int i;
	for(i = 0;i<n;i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}

int main()
{
	int v[] = {12, 34, 54, 2, 3},i;
	int n = sizeof(v)/sizeof(v[0]);
	printArray(v, n);
	shellsort(v, n);
	printArray(v, n);
	return 0;
}

