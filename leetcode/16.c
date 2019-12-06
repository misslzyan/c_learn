#include <stdio.h>
#include <stdlib.h>


#define ABS(n) ((n)<0?-(n):(n))

int compare(const void *a, const void *b){
	return (*(int*)a)-(*(int*)b);
}

int threeSumClosest(int* nums, int numsSize, int target){
	if(numsSize<3) return 0;
  // sort.
	qsort(nums, numsSize, sizeof(int), compare);
	// int tmp;
	// for(int i=0;i<numsSize;i++){
	// 	for(int j=i+1;j<numsSize;j++){
	// 		if(nums[i]>nums[j]){
 //  				tmp = nums[i];
 //  				nums[i] = nums[j];
 //  				nums[j] = tmp;
	// 		}
	// 	}
	// }
	// for(int i=0;i<numsSize;i++){
	// 	printf("%d ", nums[i]);
	// }
	// printf("\n");
	int ret = nums[0]+nums[1]+nums[2];
	for(int i=0;i<numsSize - 2;i++){
		int low = i+1;
		int high = numsSize - 1;
		while(low<high){
			int sum = nums[low]+nums[high]+nums[i];
			printf("sum:%d\n", sum);
			printf("%d\n", ABS(sum-target));
			printf("%d\n", ABS(ret-target));
			printf("ret:%d\n", ret);
            if(ABS(sum-target)<ABS(ret-target)){
            	ret = sum;
            }
            if(sum-target>0){
            	high--;
            }else{
            	low++;
            }
		}
	}
	return ret;
}

int main(){
	int nums[20] = {1,1,1,0};
	int ret = threeSumClosest(nums, 4, -100);
	printf("%d\n", ret);
}