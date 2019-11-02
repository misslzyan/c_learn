#include <stdio.h>

int removeElement(int* nums, int numsSize, int val){
	if(numsSize==0) return 0;
	int n=0;
	for(int i =0;i<numsSize;i++){
		if(nums[i]!=val){
			nums[n]=nums[i];
			n++;
		}
	}
	return n;
}

void print_array(int *n , int len){
	for(int i=0;i<len;i++){
		printf("%d\t", n[i]);
	}
	printf("\n");
}

int main(){
	int nums[]={1,2,3,3,3,4};
	int numsSize = 6;
	int val = 3;
	int len = removeElement(nums, numsSize, val);
	printf("%d\n", len);
	print_array(nums, len);
}