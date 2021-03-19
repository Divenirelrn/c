#include <stdio.h>

#define ADD 12

int main()
{
    #if ADD
        printf("Add compiled!\n");
    #elif SUB
        printf("SUB compiled!\n");
    #else
        printf("Other compiled!\n");
    #endif
    return 0;    
}
