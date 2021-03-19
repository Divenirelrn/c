#include <stdio.h>

int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    printf("%p, %p\n", p1, p2);    
}
