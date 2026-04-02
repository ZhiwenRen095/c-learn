#include <stdio.h>

int main() {
    int c;
    int count_lines = 0;
    int count_spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            /* 标准输入流每一行一换行符结束 */
            count_lines++;
        }else if (c == ' ') {
            count_spaces++;
        }
    }
    printf("Number of lines: %d\n", count_lines);
    printf("Number of spaces: %d\n", count_spaces);
    return 0;
}