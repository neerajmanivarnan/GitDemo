#include<stdio.h>
#include<stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j,pivot;
    returnSize = (int *)malloc(2*sizeof(int));
    returnSize[0] = 0;
    returnSize[1] = 8;
    int * array;
    array = (int *)malloc(2*sizeof(int));
    for(i=0;i<numsSize;i++){
        pivot = nums[i];
        for(j=i+1;j<numsSize;j++){
            if(nums[i] + nums[j] == target){
                array[0] = i;
                array[1] = j;
                break;
            }
        }
    }
        returnSize[0] = array[0];
        returnSize[1] =array[1];
        
        printf("%d %d",returnSize[0],returnSize[1]);
        
        return returnSize;
}


int main(){
	
	int nums[] = {3,2,4};
	int target = 6;
	int numsSize = 3;
	int *returnSize;
	
	int* ara;
	
	ara = twoSum(nums,numsSize,target,returnSize);
	
	//printf("%d %d",ara[0],ara[1]);
	
	
	
	return 0;
}
