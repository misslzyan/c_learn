#include <stdio.h>
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);
	if(left>=right)
		return;
	swap(v, left, (left+right)/2);
	last = left;
	for(i = left+1;i<=right;i++)
	{
		if(v[i]<v[left])
		{
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);//last是交换过的比left小的数，所以可以交换
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

void swap(int v[], int i, int j)
{
	int temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int main()
{
	int v[] = {5, 4, 3, 2, 1};
	qsort(v, 0, 4);
	for(int i =0;i<5;i++)
	{
		printf("%d ", v[i]);
	}
	printf("\n");
}