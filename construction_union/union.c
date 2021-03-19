//
// Created by dell on 2021/2/17.
//
/*
 * 共用体
 *
 * 使几个不同变量共占同一段内存的结构称为“共用体”类型的结构
 * 如：学生信息包含姓名、年龄、班级
 *    教师信息包含姓名、年龄、办公室
 *    要将两种信息放于一张表中，就要用到共用体
 *
 * struct
 * {
 *   int num;
 *   char name[10];
 *   char sex;
 *   char job;
 *   union
 *   {
 *     int banji;
 *     char position[10];
 *   }category;
 * }person[2];
 *
 * 定义方式：
 * union data
 * {
 *   int i;
 *   cahr ch;
 *   float f;
 * }a,b,c;
 *
 * union data
 * {
 *   int i;
 *   char ch;
 *   float f;
 * };
 * union data a,b,c;
 *
 * 共用体与结构体比较：
 *   结构体变量所占长度为各成员内存之和；共用体变量所占长度为最长成员长度
 *   结构体一般用于同一种类对象属性的封装；共用体可以用于不同种类对象属性的封装
 *
 * 共用体的引用：
 *   只能引用共用体变量的成员
 *
 * 共用体类型数据的特点：
 *   同一内存段可以用来存放几种不同类型的成员，但在同一瞬间只能存放其中一种，而不是同时存放几种
 *
 *  union Data
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
 *
 *
 *
 *
 */

