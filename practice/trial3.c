#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,4,5,6};
    
    int *p = arr;
    printf("%d\n", p[0]); 
    printf("%d\n", *(p+1));

    return 0;    
}
