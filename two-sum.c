#include "common.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *ret = (int *)malloc(sizeof(int) * 2);
    memset(ret, 0, 2);
    for (int i = 0; i < numsSize - 1; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[j] == target - nums[i])
            {
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main(void)
{
    int ret[2] = {0};
    int *returnSize = ret;
    int nums[] = {2, 7, 11, 34};
    twoSum(nums, 4, 9, returnSize);
}