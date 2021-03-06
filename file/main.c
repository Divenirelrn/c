#include <stdio.h>

int main() {
    /*
     * 文件操作
     *
     * 源文件
     * 头文件
     * 目标文件(.obj)
     * 可执行文件(.exe)
     * 库文件（.dll）
     *
     * ASCII文件：每一个字节存放一个ASCII代码
     * 二进制文件：把内存中的数据按其在内存中的存储形式原样输出到磁盘上存放
     *
     * ASCII文件：
     *   便于对字符进行逐个处理，也便于输出字符；但一般占用空间较多
     * 二进制文件：
     *   可以节省外存空间与转换时间，但一个字节并不对应一个字符
     * 一般中间结果需要暂时保存到外存上，以后又需要输入内存，常用二进制文件保存
     *
     *缓冲文件系统：
     *   系统自动在内存区为每一个正在使用的文件开辟一个缓冲区。用缓冲文件系统进行的输入输出又称为高级磁盘输入输出。
     *非缓冲文件系统;
     *   系统不自动开辟确定大小的缓冲区，而由程序为每个文件设定缓冲区。用非缓冲文件系统进行的输入输出又称为低级输入输出系统。
     *
     * unix系统下，用缓冲文件系统处理文本文件，用非缓冲文件系统来处理二进制文件
     * ANSI C标准只采用缓冲文件系统来处理文本文件与二进制文件
     * C语言对于文件的读写都是用库函数来实现
     *
     * 文件类型指针变量：
     *   FILE *fp;
     *   fp是一个指向FILE类型结构体的指针变量
     *
     * 文件的打开：
     *   FILE *fp;
     *   fp = fopen(文件名，使用方式)
     *
     * *system("pause"); //使程序暂停
     *
     * 文件的关闭：
     *   fclose(文件指针);
     *
     * 文件的读写：
     *   c语言提供了多种文件读写函数
     *   字符读写函数：
     *     fgetc与fputc
     *   字符串读写函数：
     *     fgets与fputs
     *   数据块读写函数：
     *     fread与fwrite
     *   格式化读写函数：
     *     fscanf与fprintf
     *
     *   fputc:
     *     fputc(ch, fp);
     *     将ch的值输入到fp所指向的文件中去
     *     EOF(-1)
     *     while(!feof(fp)) //文件结尾
     *     exit(0) //终止程序
     *   fgetc:
     *     ch = fgetc(fp);

         FILE *fp;
         fp = fopen("./xiaojun.txt", "w+");
    
         for(int i=0; i<100; i++)
         {
             fputc('o', fp);
         }
    
         while(!feof(fp))
         {
             char ch = fgetc(fp);
             printf("%c ", ch);
         }


     *   fgets:
     *     fgets(str, n, fp);
     *     从fp所指文件中读出n-1个字符送入字符数组str中（有一个'\0'）
     *   fputs:
     *     fputs("lrn", fp);

         char str[10];
         fgets(str, 5, fp);
         printf("%s\n", str);

     *   fread与fwrite:
     *     fread(buffer,size,count,fp);
     *     fwrite(buffer,size,count,fp);
     *     buffer:是一个指针
     *     对于fread，是读入数据的存放地址
     *     对于fwrite,是输出数据的地址
     *     size:要读写的字节数
     *     count:要进行读写多少个size字节的数据项

         char str[10];
         fread(str, 1, 5, fp);
         printf("%s\n", str);

         char *p = "ajhscij";
         fwrite(p, 1, 5, fp);
         fclose(fp);

     *   fprintf
     *     fprintf(文件指针，格式字符串，输出列表);
     *     fscanf(文件指针，格式字符串，输入列表);

         fprintf(fp, "%s, %s, %s, %d\n", "hello", "xiaojun", "love", 2021);

     *
     * 顺序读写与随机读写：
     *   顺序读写：
     *     位置指针按字节位置顺序移动
     *   随机读写：
     *     读完上一个字符后，并不一定要读写其后续的字符，而可以读写文件中任意位置上所需要的字符
     *
     *   fseek(一般用于二进制文件)
     *     改变文件的位置指针
     *     fseek(文件类型指针，位移量，起始点);
     *     fseek(fp, 100L, 0);
     *
     *     起始点：
     *       文件开头 SEEK_SET 0
     *       文件当前位置 SEEK_CUR 1
     *       文件末尾 SEEK_END 2
     *
     *     位移量：以起始点为基点，向前移动的字节数
     *
     *   rewind(fp) 重置文件指针
     *
     * ftell
     *   得到流式文件中的当前位置，用相对于文件开头的位移量来表示
     *   返回当前位置
     *
     *   i = ftell(fp);
     *   if(i == -1L) printf("error\n");
     *
     * 出错检测：
     *   ferror函数:
     *     ferror(fp); //返回0，表示未出错
     *
     *   clearerr:
     *     clearerr(fp);
     *     使文件错误标志和文件结束标志置为0
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     *
     */
    return 0;
}
