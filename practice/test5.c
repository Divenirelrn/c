#include <stdio.h>

int main()
{
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int row = sizeof(arr) / sizeof(arr[0]);
    int column = sizeof(arr[0]) / sizeof(arr[0][0]);
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("%p, %p, %p, %p\n", arr, *arr, arr[0], &arr[0]);
    printf("%p, %p, %p, %p\n", arr + 1, *(arr + 1), arr[1], &arr[1]);
    printf("%p, %p, %d\n", *(arr + 1) + 2, arr[1] + 2, *(*(arr + 1) + 2));

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    int (*p)[4] = arr;
    
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
