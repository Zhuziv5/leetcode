/**
 * 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
 * 有效字符串需满足：
左括号必须用相同类型的右括号闭合。左括号必须以正确的顺序闭合。注意空字符串可被认为是有效字符串。
示例 1:
输入: "()"      输出: true
示例 2:
输入: "()[]{}"  输出: true
*/
#include "common.h"
char push(char *cArray, char c)
{
}
char pop(char *cArray, int bLen)
{
}
char isValid(char *s)
{
    int len = strlen(s);
    char cArray[1024] = {0};
    for (int i = 0; i < len; i++)
    {
        switch (s[i])
        {
        case '(':
        case '[':
        case '{':
            push(cArray, s[i]);
            break;
        case ')':
        case ']':
        case '}':
            pop(cArray, i + 1);
            break;
        default:
            break;
        }
    }
}
