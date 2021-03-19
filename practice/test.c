#include<stdio.h>


//function declare
void swap(int *p1, int *p2);

void main()
{
    int a = 10, b=20;
    //printf("Please input your number:");
    //scanf("%d", &a);
    //printf("%d\n", a);
    //int *p = &a;
    //printf("%d\n", *p);
    int *p1, *p2, *p;
    p1 = &a;
    p2 = &b;
    printf("%p, %p\n", p1, p2);
    //printf("%d, %d\n", *p1, *p2);
    if(a < b)
    {
        //p = p1;
        //p1 = p2;
        //p2 = p;    
        swap(p1, p2);
    }        
    printf("%p, %p\n", p1, p2);
    //printf("%d, %d\n", a, b);
    //printf("%d, %d\n", *p1, *p2);
    
}

void swap(int *p1, int *p2)
{
    printf("%p, %p\n", &*p1, &*p2);
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    //printf("%p, %p\n", p1, p2);
    //printf("%d, %d\n", *p1, *p2);
}
