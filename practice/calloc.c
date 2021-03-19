#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *buff;
    buff = (int*)calloc(10, sizeof(int));

    for(int i=0;i<10;i++)
    {
        buff[i] = i;
    }

    for(int i=0;i<10;i++)
    {
        printf("%d\n", buff[i]);
    }


    return 0;    
}
