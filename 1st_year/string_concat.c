// #include <stdio.h>
// #include <string.h>

// int main(){
//     char str1[10];
//     char str2[10];
//     char str3[] = " is a friend of ";

//     printf("Enter name of 1st friend:- \n");
//     gets(str1);
//     printf("Enter name of 2nd friend:- \n");
//     gets(str2);

//     // puts(strcat(str1, str3));
//     printf("%d is a friend of %d" &str1, &str2);

// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20];
    char s2[20];
    char s3[20];


    printf("Enter your name:- ");
    scanf("%s",&s1);
    strcat(s1,"  is a friend of ");
    puts(s1);

   printf("Enter Seconds name:- ");
   scanf("%s",s2);
   strcpy(s3,strcat(s1,s2));
   puts(s3);

}