#include <stdio.h>

int main() {
    /*
     *数组不支持动态指定元素数量
     */
    //动态赋值
//    int a[10];
//    for(int i=0; i<10; i++){
//        a[i] = i;
//    }
    //初始赋值
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    int a[10] = {0};
//    for(int i=0; i<10; i++){
//        printf("Array:%d\n", a[i]);
//    }
    //二维数组
    int a[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\n", a[i][j]);
        }
    }
    return 0;
	
	sizeof(arr[0][0]) 一个元素占用空间
	sizeof(arr[0]) 一行元素占用空间
	sizeof(arr) 整个二维数组占用空间
}
