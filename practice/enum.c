#include <stdio.h>

int main()
{
    enum weekday{sun, mon, tuesd, wesd, thur, fri, sat};

    enum weekday w;
    w = sun;

    //printf("%d\n", w);

    enum color{red=1, green, yellow, pink, purple};
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

    return 0;    
}
