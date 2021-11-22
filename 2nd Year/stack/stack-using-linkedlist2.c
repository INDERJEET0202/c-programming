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

struct node * pop (struct node * top){
    if(isEmpty(top)){
        printf("Stack Underflow!\n");
    }
    else{
        struct node * n = top;
        int x = n -> data;
        top = (top) -> next;
        free(n);
        printf("popped element is %d\n", x);
        return top;
    }
}

int main(){
    struct node * top = NULL;
    int n;
    printf("Enter the number of elements to be pushed in the stack: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i ++){
        int x;
        printf("Enter %d element to be pushed to stack : ", i);
        scanf("%d", &x);
        top = push(top, x);
    }
    stackTraversal(top);

    top = pop(top);
    stackTraversal(top);
    return 0;
}