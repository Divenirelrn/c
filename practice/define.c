#include <stdio.h>

#define PI 3.1415926
#define INTERGER int
#define my(y) ((y) * (y) + 3 * (y))

int main()
{
    float r = 3.5;
    float s = PI * r * r;
    printf("%lf\n", s);

    INTERGER a = 3;
    printf("size of INTERGER:%d\n", (int)sizeof(a));

    int res = my(2);
    printf("%d\n", res);

    return 0;    
}
