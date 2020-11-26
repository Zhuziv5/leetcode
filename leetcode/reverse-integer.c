/**
 * 给出一个 32 位的有符号整数，你需要将这个整数中每位上的数字进行反转。
*/

#include "common.h"

int reverse(int x)
{
    puts("hereee!");
    char isPositive = 0; //0:正数 1:负数
    if (x >= 0)
    {
        isPositive = 0;
        printf("here!Line is %d\n", __LINE__);
    }
    else
    {
        printf("Line is %d\n", __LINE__);
        isPositive = 1;
        if (x == -2147483648)
        {
            printf("Line is %d\n", __LINE__);
            return 0;
        }

        x = -x;
        printf("%d!Line is %d\n", x, __LINE__);
    }
    int ret = 0;
    int index = 0;
    while (x != 0)
    {
        ret = (x % 10) + ret * 10;
        x = x / 10;
    }

    return isPositive ? -ret : ret;
}
int main(void)
{
    // int b = -2 ^ 31;
    // printf("b is %d\n", b);
    // printf("%d\n", INT_MIN);
    int a = reverse(1534236469);
    printf("%d, line is %d\n", a, __LINE__);
}