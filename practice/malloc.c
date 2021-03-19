#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *buffer;
    buffer = (int *)malloc(sizeof(int) * 10);
    printf("%p\n", buffer);
    for(int i=0;i<10;i++)
    {
        buffer[i] = i;
    }
    printf("buff length:%ld\n", sizeof(buffer));
    for(int i=0; i < 10; i++)
    {
        printf("%d\n", buffer[i]);    
    }
    free(buffer);

    char *buff;
    buff = (char *)malloc(sizeof(char) * 10);
    strcpy(buff, "hello world world");

    buff = (char*)realloc(buff, sizeof(int)*20);

    strcat(buff, "hello");

    printf("%s\n", buff);

    

    free(buff);


    return 0;
}
