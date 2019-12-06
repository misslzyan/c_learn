#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    int jw = 0;
    int size = digitsSize +1;
    int rsize = size;
    int *ret = calloc(size,sizeof(int));
    for (int i = digitsSize-1; i >= 0; i--) {
        int tmp = digits[i]+jw;
        if(i==digitsSize-1){
         tmp = tmp+1; 
        }
        if(tmp>=10){
            jw = 1;
            ret[--size] = tmp-10;
        }else{
            jw=0;
            ret[--size] = tmp;
        }
    }
    if(jw>0){
     ret[--size]=jw;
    }
    if(ret[0]==0){
        *returnSize =rsize-1;
        return &ret[1];
    }else{
        *returnSize = rsize;
        return ret;
    }
}

int main(){
 int digits[]={9};
 int digitsSize = 1;
 int returnSize;
 int* res = plusOne(digits, digitsSize, &returnSize);
 for(int i =0;i<returnSize;i++){
 printf("%d ",res[i]);
 }
 printf("\n");
}
