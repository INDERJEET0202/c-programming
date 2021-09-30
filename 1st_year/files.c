#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    ptr = fopen("exampleFile.txt", "a+");
    // char  c = fgetc(ptr);
    // printf("The character I read was %c\n", c );
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c );


    char str[1];
    fgets(str, 101, ptr);
    printf("The string is %s\n", str);

    // fputc('o',ptr);
    // fputs("this is Indrajit ",ptr);



    fclose(ptr);
    return 0;
}
