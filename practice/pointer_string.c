#include <stdio.h>

void printWork(char text[]);
void printWork2(char *p);

int main()
{
    char str[] = "xiaojun";
    printf("%s\n", str);

    char *p = str;
    printf("%c\n", *p);
    printf("%s\n", p);

    str[7] = 'a';

    printf("%s\n", p);


    char *p1 = "lixiaojun";

    printf("%s\n", p1);
    printf("%c\n", *(p1 + 1));

    //*(p1 + 1) = 'l'; //常量存储区数据不可修改
    //printf("%s\n", p1);

    printf("--------------------------------\n");

    char arr[] = "xiaojun";
    printWork(arr);

    char *p2 = "lixiaojun";
    printWork2(p2);

    return 0;    
}

void printWork(char text[])
{
    printf("%s\n", text);        
}

void printWork2(char *p)
{
    printf("%s\n", p);
}
