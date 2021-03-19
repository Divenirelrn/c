//
// Created by dell on 2021/2/17.
//
/*
 * 指针数组与指向指针的指针
 *
 * 指针数组：
 *   int *name[4];
 *
 * 指针数组的一个重要作用是作为main函数的形参
 *   void main(int argc, char *argv[])
 *   main函数的参数应在命令行给出
   
   int main(int argc, char *argv[])
   {
       printf("%d\n", argc);

       for(int i = 1; i < argc; i++)
       {
           printf("%s\n", argv[i]);
       }

       return 0;
   }

   ./test model weights/best.pth
 *
 * 指向指针数据的指针变量：
 *   char **p;
 *
 *
 */

