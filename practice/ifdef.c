#include <stdio.h>

#define SUB

int main()
{
    #ifdef ADD
        printf("ADD function compiled!\n");
    #else
        printf("Other function compiled!\n");
    #endif

    return 0;    
}
