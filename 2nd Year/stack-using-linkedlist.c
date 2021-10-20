#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void stackTraversal (struct node * ptr){
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr -> data);
        ptr = ptr -> next;
    }
    
}

int isEmpty (struct node * top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull (struct node * top){
    struct node * p = (struct node *)malloc (sizeof(struct node));
    if (p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push (struct node * top, int x){
    if(isFull(top)){
        printf("Stack Overflow!!\n");
    }
    else{
        struct node * n = (struct node *)malloc(sizeof(struct node));
        n -> data = x;
        n -> next = top;
        top = n;
        return top;
    }
}

int pop (struct node ** top){
    if(isEmpty(*top)){
        printf("Stack Underflow!\n");
    }
    else{
        struct node * n = *top;
        int x = n -> data;
        *top = (*top) -> next;
        free(n);
        return x;
    }
}

int main(){
    struct node * top = NULL;
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    stackTraversal(top);

    int element = pop(&top);
    printf("Popped element is %d\n", element);
    stackTraversal(top);
    return 0;
}