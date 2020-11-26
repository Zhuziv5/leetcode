/**
 * 
输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

示例 1：
输入：head = [1,3,2]
输出：[2,3,1]
*/
#include "common.h"
struct ListNode
{
    int val;
    struct ListNode *next;
};
int main(void)
{
}
int *reversePrint(struct ListNode *head, int *returnSize)
{

    struct ListNode *tmp = head;
    while (tmp != NULL)
    {
        *returnSize++;
        tmp = tmp->next;
    }
    int *ret = (int *)malloc(*returnSize);
    memset(ret, 0, *returnSize);
    tmp = head;

    for (int i = 0; i < *returnSize; i++)
    {
        ret[(*returnSize) - i - 1] = tmp->val;
        tmp = tmp->next;
    }
}