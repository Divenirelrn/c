#include <stdio.h>

int addone();

int main()
{
    addone();
    addone();

    return 0;    
}

int addone()
{
    static int i = 0;
    i++;
    printf("%d\n", i);
}
