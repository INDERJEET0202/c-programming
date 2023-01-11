#include <stdio.h>
#include <unistd.h>

void main(){
    if(fork() && fork()){
        fork();
        printf('hello');  
    }
}