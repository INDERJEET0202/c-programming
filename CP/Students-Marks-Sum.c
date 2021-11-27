#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
//   int m;
//   *marks = m;
  int sum = 0;
    if(gender == 'b'){
        for(int i =0; i <= number_of_students; i = i + 2){
            sum = sum + marks[i];
        }
        return sum;
    }
    else if(gender == 'g'){
        for(int j = 1; j <= number_of_students; j = j + 2){
            sum = sum + marks[j];
        }
        return sum;
    }
    else{
        printf("Wrong input");
        return sum;
    }
}

int main() {