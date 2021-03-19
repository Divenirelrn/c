#include <stdio.h>

//声明外部函数
extern int add(int a, int b);

//定义全局变量
int flag = 0;

int main()
{
    int res = add(2,3);

    printf("res:%d\n", res);

    return 0;    
}
