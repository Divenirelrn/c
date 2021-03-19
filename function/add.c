#include <stdio.h>

//声明外部变量
extern int flag;

int add(int a, int b)
{
    flag = 1;
    printf("flag=%d\n", flag);
    return a + b;
}
