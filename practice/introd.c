#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    printf("Please input your number:");
    scanf("%f", &a);

    float res = sin(a);
    printf("%f\n", res);

    return 0;    
}
