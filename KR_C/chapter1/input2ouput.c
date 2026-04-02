#include <stdio.h>

int main()
{
    int c;
    int last_char = 0; /* 用于记录上一个字符 */

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && last_char == ' ')
        {
            /* 如果当前字符是空格且上一个字符也是空格，则跳过 */
            continue;
        }
        putchar(c);
        last_char = c; /* 更新上一个字符 */
    }
    return 0;
}