#include <stdio.h>

int main()
{
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

    //fputs("hello xiaojun", fp);

    #if(0)
    char str[10];
    fgets(str, 5, fp);
    printf("%s\n", str);
    #endif

    #if(0)
    char str[10];
    fread(str, 1, 5, fp);
    printf("%s\n", str);
    #endif

    #if(0)
    char *p = "ajhscij";
    fwrite(p, 1, 5, fp);
    fclose(fp);
    #endif

    fprintf(fp, "%s, %s, %s, %d\n", "hello", "xiaojun", "love", 2021);

    return 0;    
}
