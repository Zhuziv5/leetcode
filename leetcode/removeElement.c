/**
 * 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，
 * 并返回移除后数组的新长度。
 * 不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。
 * 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。

示例 1:
给定 nums = [3,2,2,3], val = 3,
函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。
你不需要考虑数组中超出新长度后面的元素。
*/
#include "common.h"
int removeElement(int *nums, int numsSize, int val)
{
    int tmp = 0;
    if (numsSize == 1)
    {
        if (nums[0] == val)
            return 0;
        return 1;
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (val == nums[i])
        {
            for (int j = i + 1; j < numsSize; j++)
            {
                if (nums[j] != nums[i])
                {
                    tmp = nums[j];
                    nums[j] = nums[i];
                    nums[i] = tmp;
                    break;
                }
            }
        }
    }
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            return i;
        }
    }
    return numsSize;
}