#include <stdio.h>

int main()
{
    char *p = "asfads";

    printf("%c\n", p[0]);
    printf("%c\n", *(p+2));

    return 0;    
}
