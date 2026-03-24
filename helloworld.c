#include <stdio.h>

int main() {
    char name[20];
    printf("环境配置成功！请输入你的名字: ");
    scanf("%s", name);
    printf("你好, %s! 欢迎回到 C 语言的世界。\n", name);
    return 0;
}