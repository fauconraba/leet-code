#include <stdlib.h>

int* runningSum(int* nums, int numsSize, int* returnSize){
   
   int *newt;

   newt=(int *)malloc(sizeof(int)*numsSize);
   int i =1;
   
   newt[0]=nums[0];

   while(  i < numsSize)
   {
    newt[i]=nums[i] + newt[i-1];
    i++;
    
   }
   *returnSize = numsSize;
    return newt;
}
