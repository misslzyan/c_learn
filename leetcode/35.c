#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target){
	int mid = numsSize/2;
	int low = 0;
	int high = numsSize;
	while(low < high){
		if(nums[mid]==target){
			return mid;
		}else if(nums[mid]<target){
			low = mid+1;
		}else {
			high = mid;
		}
		mid = (low+high)/2;
	}
	return mid;
}

int main(){
	int nums[] = {1,2,4,5,6};
	int numsSize = 6;
	int target = 3;
	printf("%d\n", searchInsert(nums, numsSize, target));
}