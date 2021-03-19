//
// Created by dell on 2021/2/17.
//
/*
 * 字符串与指针
 *
 * 字符数组：
 *   char string[] = "I love fishC!";
 * 字符指针指向字符串：
 *   char *string = "I love fishC!";
 *
 * （补充）c语言内存中的5个区：
 *     堆：new分配的内存块（与delete结合使用）
 *     栈：存放局部变量、函数参数等
 *     自由存储区：malloc分配放入内存块（与free结合使用）
 *     全局/静态存储区：全局变量与静态变量
 *     常量存储区：只读
 * a[]与*a的区别：
 *     *a将字符串放入常量存储区中，因此不能写入
 *     a[]由若干个元素组成，而字符指针变量中存放的是地址
 *     赋值方式不同。字符数组只能对各个元素赋值，而字符指针变量可以通过以下方式赋值：
 *         char *a;
 *         a = "I love fishC!";
 *
 *  void printWork(char text[])
 *  {
 *      printf("%s\n", text);
 *  }
 *
 *  printWork(a); 
 *
 *
 */

