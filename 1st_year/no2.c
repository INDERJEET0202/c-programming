#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[30];
    float marks[3];
    float total;
    float average;
    char roll[20];
};

int main()
{
    struct student s[5];

    for (int i = 0; i < 5; i++)
    {

        printf("Enter name\n");

        scanf("%s", s[i].name);

        printf("Enter roll number\n");

        scanf("%s", &s[i].roll);

        printf("Enter marks for 3 subjects\n");

        scanf("%f%f%f", &s[i].marks[0], &s[i].marks[1], &s[i].marks[2]);

        s[i].average = (s[i].marks[0] + s[i].marks[1] + s[i].marks[2]) / 3;
    }

    for (int i = 0; i < 5; i++)
    {

        printf("%s\n", s[i].name);

        printf("Roll number : %s\n", s[i].roll);
        printf(" Marks in 1st subject : %f \n", s[i].marks[0]);
        printf(" Marks in 2nd subject : %f \n", s[i].marks[1]);
        printf(" Marks in 3rd subject : %f \n", s[i].marks[2]);

        printf("Average : %f \n", s[i].average);
    }
    return 0;
}