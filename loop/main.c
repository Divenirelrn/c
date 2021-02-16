#include <stdio.h>

int main() {
    //goto
//    int i = 0, sum;
//    loop: if(i<100){
//        sum += i;
//        i++;
//        goto loop;
//    }
//    printf("%d", sum);
    //while
//    int i = 0, sum;
//    while (i<100){
//        sum += i;
//        i++;
//    }
//    printf("%d", sum);
    //do...while...
//    int i = 0, sum;
//    do {
//        sum += i;
//        i++;
//    } while (i<100);
//    printf("%d", sum);
    //for
    int i = 0, sum;
    for(i;i<100;i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}

//break&continue
