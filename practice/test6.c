#include <stdio.h>

int max(int a, int b);
void printWork(char c);
int add(int a, int b);
void test(void (*p1)(char), int (*p2)(int, int));

int main()
{
    int (*p)(int, int) = max;
    int res = (*p)(2, 3);
    printf("max value %d\n", res);

    void (*p1)(char) = printWork;
    int (*p2)(int, int) = add;

    test(p1, p2);

    return 0;
}

int max(int a, int b)
{
    return a > b ? a : b;
}

void printWork(char c)
{
    printf("%c\n", c);
}

int add(int a, int b)
{
    return a + b;    
}

void test(void (*p1)(char), int (*p2)(int, int))
{
    (*p1)('a');
    int res = (*p2)(1, 2);
    printf("add result: %d\n", res);
}
