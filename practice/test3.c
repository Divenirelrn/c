#include <stdio.h>
#include<string.h>

int main()
{
    int arr2[] = {0};
    printf("%p\n", arr2);
    int arr[2][3] = {{1,2,3}, {4,5,6}};
    int row, column;
    //printf("%ld\n", sizeof(arr));
    row = sizeof(arr) / sizeof(arr[0]);
    column = sizeof(arr[0]) / sizeof(arr[0][0]);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
    char strArr[] = "agshfdiak";
    for(int i = 0; i < strlen(strArr); i++)
    {
        printf("%c\n", strArr[i]);
    }
    return 0;
}
