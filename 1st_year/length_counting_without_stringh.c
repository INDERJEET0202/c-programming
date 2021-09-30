#include <stdio.h>
int main()
{
    char str[100], i;
    printf("Please enter a string: \n");
    gets(str);
    for(i= 0; str[i]!= '\0'; i++);
    printf("\n Length of string: %d",i);
return 0;    
}