#include <stdio.h>

int main()
{
    int i = 0, s = 0;
    #if(0)
    while(i <= 100)
    {
        s += i;
        i++;  
    }
    #endif
 
    #if(0)
    do
    {
      printf("loop execute");
      s += i;
      i++;
    }while(i <= 100);
    #endif

    loop: if(i <= 100)
    {
        s += i;
        i++;
        goto loop;
    }

    printf("%d\n", s);

    return 0;    
}
