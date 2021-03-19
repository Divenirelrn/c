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
   a = sun;
   printf("%d\n", a);
 *
 * enum weekday{sun, mon, tue, wed, thu, fri, sat}a, b, c;
 *
 * enum {sun=1, mon, tue, wed, thu, fri, sat}a, b, c;
 *
 * 注意点：
 *   枚举类型是一种基本数据类型。而不是构造数据类型
 *   枚举元素作为常量，他们是有值的，c语言编译时按定义的顺序使他们的值为0，1，2...
 *
 * 枚举在switch中的应用：
 *  enum color{red=1, green, yellow, pink, purple};
    enum color fav_color;

    printf("请输入最喜欢的颜色：(1-红色，2-绿色，3-黄色，4-粉色，5-紫色)");
    scanf("%u", &fav_color);

    switch(fav_color)
    {
        case red:
            printf("红色");
            break;
        case green:
            printf("绿色");
            break;
        case yellow:
            printf("黄色");
            break;
        case pink:
            printf("粉色");
            break;
        case purple:
            printf("紫色");
            break;
        default:
            printf("大傻子");
    }
 *
 *
 *
 */

