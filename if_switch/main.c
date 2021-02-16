#include <stdio.h>

void main() {
    printf("Please input your score:\n");
    int score;
    scanf("%d", &score);
//    if(score >= 90) printf("A");
//    else if(score >= 70) printf("B");
//    else if(score >= 60) printf("C");
//    else printf("D");
    //switch
//    switch(score){
//        case 90: printf("A");break;
//        case 80: printf("B");break;
//        case 60: printf("C");break;
//        default:printf("D");
//    }
    //condition
    int a = score > 80 ? 'A' : 'B';
    printf("%c\n", a);
}
