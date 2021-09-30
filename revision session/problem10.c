#include <stdio.h>

struct student
{
    char name[39];
    int roll;
    float marks;
};

int main()
{
    struct student std;
    struct student *ptr;

    ptr = &std;
    printf("Enter details of student: ");
    printf("Name - ");
    gets(ptr -> name);
    printf("Roll no - ");
    scanf("%d", &ptr -> roll);
    printf("Marks obtained - ");
    scanf("%f", &ptr -> marks);

    printf("Name of student is - %s\n", ptr -> name);
    printf("Roll number is - %d\n", ptr -> roll);
    printf("Marks is - %f\n", ptr -> marks);
    return 0;
}