#include <stdio.h>

int main() {
    /*
     * 结构体
     *
     * 有时需要将不同类型的数据组合成一个有机的整体，以便于引用
     *
     * struct 结构名
     * {
     *   成员列表
     * };
     *
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * };
     *
     * 定义结构体类型变量：
     * 方式一：
     * struct student student1,student2;
     *
     * 方式二：
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * } student1, student2;
     *
     * 方式三：
     * struct
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * } student1, student2;
     *
     * 嵌套定义：
     * struct date
     * {
     *   int month;
     *   int day;
     *   int year;
     * };
     *
     * struct
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   struct date birthday;
     *   float score;
     * }boy1, boy2;
     *
     * 结构体变量的引用：
     *   不能将一个结构体变量作为一个整体进行输入与输出
     *   正确引用方式：
     *     student1.num = 100;
     *     student1.birthday.month = 4;
     *     &boy1 //boy1的地址
     *     &boy1.num //变量成员num的地址
     *   结构体变量的地址通常作为函数参数
     *
     * 结构体变量的初始化：
     * struct student s1 = {102， “liruonan”, "M", 18};
     *
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * } student1, student2 = {102， “liruonan”, "M", 18};
     *
     * 结构体数组：
     * 定义：
     * 方式一：
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * };
     * struct student student[3];
     *
     * 方式二：
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * }student[3];
     *
     * 初始化：
     * 方式一：
     * struct student
     * {
     *   int num;
     *   char name[20];
     *   char sex;
     *   int age;
     * } student[2] = {
     *      {102， “liruonan”, "M", 18},
     *      {103, "lixiaokou", "M", 19}
     * };
     * 方式二：
     * struct student str[]{
     *     {102， “liruonan”, "M", 18},
     *     {103, "lixiaokou", "M", 19}
     * };
     *
     * 指向结构体类型数据的指针
     *    指向结构体变量的起始地址
     *
     *    struct 结构名 *结构指针变量名;
     *    stuct student *pstu;
     *
     *    赋值：
     *      pstu = &student1; //此处为结构变量
     *
     *    访问:
     *      (*pstu).num
     *      pstu->num
     *
     *    结构指针变量作为函数参数

     */
    return 0;
}
