#include <stdio.h>

void printArr(int arr[], int n);
void printArr2(int *p, int n);

int main()
{
    int arr[] = {1,2,3,4,5};
    printf("%p, %d\n", arr, *arr);
    printf("%p, %d\n", arr+1, *(arr+1));

    printf("--------------------------\n");
    for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    

    printf("-------------------------\n");
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    for(p=arr;p < arr + 5;p++)
    {
        printf("%d\n", *p);
    }
    
    printf("-------------------------\n");
    printArr(arr, 3);
    printArr2(arr, 3);

    return 0;
}

void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void printArr2(int *p, int n)
{   
    for(int i = 0; i < n; i++)
    {
        printf("%d\n", *(p+i));
    }
}
