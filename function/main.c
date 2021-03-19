#include <stdio.h>
#include "printline.c" //引入外部文件
/*
 * c语言中，函数不能嵌套定义，只能嵌套调用
 * 递归：
 *    递归必须有结束条件
 *    递归效率低，但有些问题必须通过递归实现（如hanoi塔问题）
 * 变量的类型与存储方式：
 *    存储方式：
 *      静态存储方式:全局变量、静态变量，在编译完成后就存在且赋值，在整个程序结束后释放
 *      动态存储方式：在函数执行时分配内存，函数调用完成后释放内存
 *    用户存储空间：
 *      程序区
 *      静态存储区
 *      动态存储区
 *    变量种类:
 *      auto:局部变量的默认种类，存储方式为动态
 *      static:有时希望变量值不随函数的结束而释放，存储方式为静态
 *      register:对一些频繁使用的变量，将局部变量的值放入CPU寄存器中
 *      extern:外部变量，即全局变量（作用域从定义处至文件结尾），其作用相当于python中的global,声明其它文件中定义的函数或全局变量
 *             若外部变量与局部变量名相同，在局部作用域内会屏蔽外部变量
 * 时间与空间特性：
 *     变量的作用域
 *     变量的生存期
 * 声明方式：
 *     定义性声明：int a;
 *     引用性声明：extern int a;
 * 多文件引用
 *     与单文件引用方式相同
 *     若希望外部变量只限于被本文件引用，可以在定义外部变量时加一个static
 * 内部函数与外部函数：
 *     内部函数:只能被本文件调用，函数定义前加static
 *     外部函数：不加static,默认为extern
 *
 *  const定义的常量在超出其作用域之后其空间会被释放，而static定义的静态常量在函数执行后不会释放其存储空间
 */


 //extern
 main.c:
     #include <stdio.h>

    //声明外部函数
    extern int add(int a, int b);

	//定义全局变量
	int flag = 0;

	int main()
	{
    	int res = add(2,3);

    	printf("res:%d\n", res);

    	return 0;
	}

 add.c:
 	#include <stdio.h>

	//声明外部变量
	extern int flag;

	int add(int a, int b)
	{
    	flag = 1;
    	printf("flag=%d\n", flag);
    	return a + b;
	}

//static
    //静态局部变量会保存每次修改的值，而不是每次函数调用完后释放
    #include <stdio.h>

    int addone();

    int main()
    {
        addone(); //输出1
        addone(); //输出2

        return 0;
    }

    int addone()
    {
        static int i = 0; //静态局部变量
        i++;
        printf("%d\n", i);
    }



void printstar(); //函数声明，若函数定义在主函数之前，可不加声明
int max(int a, int b);
void printline();

int main() {
    /*
     * int main要求返回一个int类型的值,返回0则正常退出，返回-1说明异常
     *
     */
//    void printstar(); //函数声明
    printstar(); //函数调用
    printf("max number:%d\n", max(2,3));
    printline();
    return 0;
}

void printstar()
/*
 * 无参函数
 */
{
    printf("*****************");
}

int max(int a, int b)
/*
 * 有参函数
 * 函数的类型与返回值需一致，若不一致，以函数类型为准
 * 不加类型说明的函数，默认int类型
 * 形参在函数调用前占用内存
 * 形参与实参应类型相同或赋值兼容
 */
{
    return a > b ? a : b;
}


