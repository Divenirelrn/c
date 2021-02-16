//#include <stdio.h>
//
//void main(){
//    printf("Hello world!\n");
//}

#include <stdio.h>
#include <math.h>

void main()
{
    float x, s;
    printf("Please input number:\n");
    scanf("%1f", &x);
    s = sin(x);
    printf("The results is %1f\n", s);
}
