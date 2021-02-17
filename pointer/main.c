#include <stdio.h>
#include "pointer_array.c"

void pointer_array();

int main() {
    /*
     * 指针的优点：
     *    有效表示复杂的数据结构
     *    动态分配内存
     *    方便地使用字符串
     *    有效而方便地使用数组
     *
     *对变量的访问：
     *   直接访问：a = 5；//直接访问变量
     *   间接访问：scanf("%d", &a) //通过变量的地址访问变量
     *
     *指针是一个特殊的变量，用于存放地址
     *   int i;
     *   int *pointer; //指针变量名为pointer，而非*pointer
     *   pointer = &i;
     *
     *&与*:
     *   *：取值操作符
     *   &：取址操作符
     *
     *int i=2000;
     *int *pointer; //此处的*为标记，表示这是一个指针变量
     * pointer = &i;
     * printf("%d\n", *pointer); //此处的*为取值操作符
     *
     * 指针与指针变量：
     *   指针存放地址
     *   指针变量为存放地址的变量
     *
     * 指针与其指向的变量类型应一致，如以下写法是错误的：
     *    float a;
     *    int *pointer_1;
     *    pointer_1 = &i;
     *
     *
     */

    //比较两个变量的大小
//    int *p1,*p2,*p,a=1,b=2;
//    p1 = &a;
//    p2 = &b;
//    if(a < b)
//    {
//        p = p1;
//        p1 = p2;
//        p2 = p;
//    }
//    printf("max=%d, min=%d\n", *p1, *p2);
//    return 0;
    //交换两个变量的值
//    int a=1, b=2;
//    void swap(int *p1, int *p2);
//    int *pointer1, *pointer2;
//    pointer1 = &a;
//    pointer2 = &b;
//    if(a < b){
//        swap(pointer1, pointer2);
//    }
//    printf("max=%d, min=%d\n", *pointer1, *pointer2);

    pointer_array();
}

void swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
