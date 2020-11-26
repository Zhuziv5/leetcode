/**
 * 请实现一个函数，把字符串 s 中的每个空格替换成"%20"。
    示例 1：

    输入：s = "We are happy."
    输出："We%20are%20happy."
*/
#include "common.h"
char *replaceSpace(char *s);
int main(void)
{
    char s[20] = "we are happy.";
    printf("%s\n", replaceSpace(s));
}

char *replaceSpace(char *s)
{
    char tmp[3000] = {0};
    char *ret = (char *)malloc(3000);
    memset(ret, 0, 3000);
    int len = strlen(s);
    for (int i = 0; i < len; i++)
    {
        if (s[i] != ' ')
        {
            strncat(tmp, &s[i], 1);
        }
        else
        {
            strncat(tmp, "%20", 3);
        }
    }
    strcpy(ret, tmp);
    return ret;
}