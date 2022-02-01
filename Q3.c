#include <stdio.h>

int av_roll_no = (20152146 % 10 + 20);

struct player{
    char name;
    int age;
    int date_of_birth;
};

void print_player(struct player p){
    if(p.age > av_roll_no){
        printf("Name: %c\n", p.name);
        printf("Age: %d\n", p.age);
        printf("Date of Birth: %d\n", p.date_of_birth);
    }
}

int main(){
    struct player p[7];
    for(int i=0; i<7; i++){
        char name;
        int age;
        int date_of_birth;
        printf("Enter name: ");
        scanf("%s",&name);
        printf("Enter age: ");
        scanf("%d",&age);
        printf("Enter date of birth: ");
        scanf("%d",&date_of_birth);
    }

print_player(p[7]);

return 0;
}