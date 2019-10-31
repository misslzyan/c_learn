#include <stdio.h>
#include <stdlib.h>
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
	int **ret;
	ret = malloc(numsSize * sizeof(int *));
	int **r;
	r = ret;
	int n=0;
	for(int i = 0;i<numsSize-2;i++){
		for(int j=i+1;j<numsSize-1;j++){
			for(int k=j+1;k<numsSize;k++){
				int sum = nums[i]+nums[j]+nums[k];
				if(sum==0){
					(*returnSize)++;
					*ret = malloc(3*sizeof(int));
					**ret = nums[i];
					*(*ret+1)= nums[j];
					*(*ret+2) = nums[k];
					*((*returnColumnSizes)+n)=3;
					// printf("%d\n", **ret);
					// printf("%d\n", *(*ret+1));
					// printf("%d\n", *(*ret+2));
					// printf("%d\n", ret);
					ret++;
					n++;
					break;
				}
			}
		}
	}
	for(int i=0;i<*returnSize;i++){
		printf(":%d\n", *((*returnColumnSizes)+i));
	}
	// printf("%d\n", **r);
	// for(int i =0;i<*returnSize;i++){
	// 	for(int j=0;j<3;j++){
	// 		printf("%d ", *(*(r+i)+j));
	// 	}
	// 	printf("\n");
	// }
	// returnSize = size;
	return r;
}

int main() {
	int nums[] = {-1,0,1,2,-1,-4};
	int numsSize = 6;
	int returnSize=0;
	int *returnColumnSizes;
	returnColumnSizes=malloc(6*sizeof(int));
	int **p = threeSum(nums, numsSize, &returnSize, &returnColumnSizes);
	printf("%d\n", returnSize);
	for(int i =0;i<returnSize;i++){
		for(int j=0;j<3;j++){
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;
}