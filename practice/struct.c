#include <stdio.h>

int main()
{
    struct student
    {
        char name[10];
        int age;
        float score;
    };

    struct student s1 = {"xiaojun", 18, 99};

    printf("%s, %d, %f\n", s1.name, s1.age, s1.score);

    struct teacher
    {
        char *name;
        int age;
        char *addr;
    } t1, t2;

    t1.name = "xiaojun";
    t1.age = 18;
    t1.addr = "gz";

    printf("%s, %d, %s\n", t1.name, t1.age, t1.addr);

    struct teacher2
    {
        char name[10];
        int age;
        char addr[20];
    } t21 = {"xiaojun", 18, "gz"};

    printf("%s, %d, %s\n", t21.name, t21.age, t21.addr);

    struct student sArr[] = {
        {"xiaojun", 18, 89},
        {"xiaojun2", 19, 90},
        {"xiaojun3", 20, 99}};

    printf("%s, %d, %f\n", sArr[0].name, sArr[0].age, sArr[0].score);

    struct student *pstu = &s1;
    printf("%s, %d, %f\n", (*pstu).name, (*pstu).age, (*pstu).score);
    printf("%s, %d, %f\n", pstu->name, pstu->age, pstu->score);

    return 0;    
}
