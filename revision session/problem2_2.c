#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks;
};

int main(){
    int n;
    printf("Number of students:");
    scanf("%d", &n);
    struct student s[n];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        printf("Enter information of student (%d) :\n", (i+1));
        printf("Enter Roll no of student: ");
        scanf("%d", &s[i].roll);
        printf("Enter Name of student: ");
        scanf("%s", &s[i].name);
        printf("Enter marks of student: ");
        scanf("%f", &s[i].marks);
    }
    int max = 0;
    for(i = 0; i < n; i++)
    {
        if(s[max].marks < s[i].marks){
            max = i;
        }
    }
    printf("Heighest marks scored by: %s and roll no is %d", s[max].name, s[max].roll);
    return 0;
}
