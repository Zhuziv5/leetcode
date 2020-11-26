/**
 *  给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那
 *  两个 整数，并返回他们的数组下标。
 *  你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
*/
#include "common.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *retp = (int *)malloc(sizeof(int) * 2);
    memset(retp, 0, sizeof(int) * 2);

    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] == target - nums[j])
            {
                retp[0] = i;
                retp[1] = j;
                *returnSize = 2;
                return retp;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void)
{
}