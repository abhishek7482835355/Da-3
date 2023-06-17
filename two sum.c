/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int s[2];
    for (i=0;i<numsSize;i++) {
        for (j=i+1;j<numsSize;j++) {
            if(nums[i]+nums[j]==target) {
                *(s)=i;
                *(s+1)=j;
            }
        }
    }
    *returnSize=2;
    int *result = (int*)malloc(sizeof(int)*2);
    result[0] = s[0];
    result[1] = s[1];
    return result;
}
