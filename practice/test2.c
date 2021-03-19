#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 20;
    printf("%d, %d\n", a, b);
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}

void swap(int *a, int *b)
{
    int *temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d, %d\n", *a, *b);
}
