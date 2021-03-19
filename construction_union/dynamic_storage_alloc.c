//
// Created by dell on 2021/2/17.
//
/*
 * 动态存储分配：
     *   在实际的编程中，往往会发生：所需的内存空间取决于实际输入的数据，而无法预先确定
     *   用数组无法实现
     *   c语言提供了一些内存管理函数，可动态分配与回收内存空间
     *   分配内存空间：
     *     malloc,calloc
     *   释放内存空间：
     *     free
     *
     *   malloc:
     *     作用是在内存的动态存储区中分配一个长度为size的连续空间
     *     此函数的返回值为一个指向分配域起始地址的指针
     *     若未能成功执行，则返回null
 
           #include <stdlib>

           char *buffer;
           buffer = (char*)malloc(sizeof(char) * 10); //malloc默认返回void类型，因此一般会做一个强制类型转换
                                                        malloc的参数是以字节为基本单位
           buffer = realloc(buffer, 100); //重新分配内存
     *
     *   calloc：
     *     作用是在内存的动态存储区中分配n个长度为size的连续空间
     *     函数返回一个指向分配域起始地址的指针
     *     若未能成功执行，则返回null
     *     用calloc函数可以为一维数组开辟动态存储空间，n为数组长度，size为元素长度

          #include <stdlib>

          int *buff;
		  buff = (int*)calloc(10, sizeof(int));

		  for(int i=0;i<10;i++)
		  {    
		    buff[i] = i;
		  }   

		  for(int i=0;i<10;i++)
		  {   
			printf("%d\n", buff[i]);
		  }


     *
     *   free:
     *     释放内存
           free(buffer);
     *
     * 链表：
     *   头指针
     *   结点
     *   链表的删除域插入
 */

