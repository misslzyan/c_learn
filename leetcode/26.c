#include <stdio.h>

int removeDuplicates(int* nums, int numsSize){
	int k =0;
	for(int i = 0;i<numsSize;i++){
		if(nums[i]!=nums[k]){
			k++;
			nums[k]=nums[i];
		}
	}
	return k+1;
}

int main(){
	int nums[] = {0,0,1,1,2,2,3,3,4};
	int numsSize = 9;
	int len = removeDuplicates(nums,numsSize);
	printf("%d\n", len);
}