#include <stdio.h>
int maxArea(int *height, int heightSize) {
	int low = 0;
	int high = heightSize -1;
	int maxArea = 0;
	while(low < high) {
		int length = height[low]>height[high] ? height[high]:height[low];
		int width = high-low;
		int area = length * width;
		maxArea = maxArea > area ? maxArea : area;
		if(height[low]>height[high]){
			high--;
		} else if (height[low]<height[high]) {
			low ++;
		}else {
			low++;
			high--;
		}
	}
	return maxArea;
}

int main(){
	int height[] ={1,8,6,2,5,4,8,3,7};
	int heightSize = 9;
	printf("%d\n", maxArea(height, heightSize));
}