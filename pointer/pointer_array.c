//
// Created by dell on 2021/2/17.
//
/*
 * int a[10];
 * int *p;
 * p = &a[0]; 等价于 p = a;
 *
 * 数组名在编译时被翻译成数组的第一个元素的地址
 *
 * 用数组名作为参数
 *   f(int arr[], int n)
 * 用指针作为参数
 *   f(int *arr, int n)
 *
 * 二维数组与指针：
 *   a，a[0], &a[0], &a[0][0], *a         指向数组首地址
 *   a+1, &a[1], &a[1][0], a[1], *(a+1)   指向数组第一行首地址
 *   a[1]+2, *(a+1)+2, &a[1][2], *(a[1]+2), *(*(a+1)+2), a[1][2]   指向1行2列的元素地址
 *
 *   int (*p)[4]; //指向多维数组的指针的变量，其长度为二维数组的列数
 *   *（p+i）+j  a[i][j]元素的地址
 *   *(*(p+i)+j) a[i][j]的值
 */

void pointer_array(){
    int a[] = {1,2,3,4,5};
    int *p;
    printf("%d\n", *(a+2)); //输出第三个元素
    for(p=a;p<(a+5);p++){
        printf("%d ", *p);
    }
}
