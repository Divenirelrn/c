//
// Created by dell on 2021/2/17.
//
/*
 *  条件编译：
 *   可按照不同的条件去编译不同的程序部分
 *   使生成的目标程序较短，从而减少内存开销并提高了程序的效率
 *    
 *   #define ADD   
 *
 *   #ifdef 标识符
 *      程序段1
 *   #else
 *      程序段2
 *   #endif
 *
 *   #ifndef 标识符 (if !def)
 *     程序段1
 *   #else
 *     程序段2
 *   #endif
 *
 *
 *   #define ADD 12
 *
 *   #if 常量表达式
 *     程序段1
 *   #elif 常量表达式2
 *     程序段2
 *   #else
 *     程序段3
 *   #endif
 *
 *  防止头文件重复导入：
 *      #ifndef _FILENAME_H_
 *      #define _FILENAME_H_
 *      头文件内容...
 *      #endif 
 *  
 *  !defined应用：
 *
 *    #ifndef _CASHREGISTER_XML_PARSER_H_
 *    #ifndef _CASHREGISTER_XML_TRANSFORM_H_
 *    #ifndef _CASHREGISTER_XML_DECODE_H_
 *    *****头文件内容******
 *    #endif
 *    #endif
 *    #endif
 *
 *    替换为defined:
 *       #if !defined(_CASHREGISTER_XML_PARSER_H_)&&!defined(_CASHREGISTER_XML_TRANSFORM_H_)&&!defined(_CASHREGISTER_XML_DECODE_H_)
 *       ****头文件内容*******
 *       #endif
 */

