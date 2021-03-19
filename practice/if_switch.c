#include <stdio.h>

int main()
{
    int score;
    printf("Please input your score:");
    scanf("%d", &score);

    switch(score)
    {
        case 90:
            printf("优秀");
            break;
        case 70:
            printf("良好");
            break;
        case 60:
            printf("及格");
            break;
        default:
            printf("哈哈哈， 不及格");
    }



    return 0;    
}
