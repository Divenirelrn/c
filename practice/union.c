#include <stdio.h>

int main()
{
    union Data
    {
      int age;
      char *name;
      float score;  
    };
       
    union Data data;

    data.age = 18;
    printf("%d\n", data.age);

    data.name = "xiaojun";
    printf("%s\n", data.name);

    data.score = 99.0;
    printf("%f\n", data.score);

    return 0;    
}
