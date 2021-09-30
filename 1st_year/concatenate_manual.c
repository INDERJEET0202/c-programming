#include<stdio.h>
void cat(char b[], char a[])
{
    int i,j=0;
    for(i=0; b[i]!= '\0'; i++);
    for(j=0; a[j]!= '\0'; j++)
    {
        b[i] =a[j];
        i++;
    }
    b[i] = '\0';
}
void main()
{
    char str1[30],str2[30];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter the another string: ");
    gets(str2);
    cat(str2, str1);
    printf("After concatenation: %s ", str2);
}
