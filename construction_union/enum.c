//
// Created by dell on 2021/2/17.
//
/*
 * 枚举类型
 *
 * 实际问题中，有些变量的取值被限定在一个有限的范围内
 *
 * enum weekday{sun, mon, tue, wed, thu, fri, sat};
 * enum weekday a,b,c;
 *
 * enum weekday{sun, mon, tue, wed, thu, fri, sat}a, b, c;
 *
 * enum {sun, mon, tue, wed, thu, fri, sat}a, b, c;
 *
 * 注意点：
 *   枚举类型是一种基本数据类型。而不是构造数据类型
 *   枚举元素作为常量，他们是有值的，c语言编译时按定义的顺序使他们的值为0，1，2...
 *
 *
 */

