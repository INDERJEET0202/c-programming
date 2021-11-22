#include <stdio.h>
#include <stdlib.h>

struct queue{
    int f;
    int r;
    int * arr;
    int size;
};

int isFull(struct queue * q){
    if(q -> r == q -> size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct queue *q){
    if(q -> r == q -> f){
        return 1;
    }
    else{
        return 0;
    }
}

void enQueue(struct queue * q, int val){
    if(isFull(q)){
        printf("Data could not be entered cuz this Queue is full.\n");
    }
    else{
        printf("Enqueued element %d\n", val);
        q -> r = q -> r + 1;
        q -> arr[q -> r] = val;
    }
}

int deQueue(struct queue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is Empty.\n");
    }
    else{
        q -> f++;
        a = q -> arr[q -> f];
    }
    return a;
}

int main()
{
    int i = 0;
    int j;
    int n;
    printf("Enter the size of queue you want : ");
    scanf("%d", &n);
    struct queue q;
    q.size = n;
    q.f = q.r = -1;
    q.arr = (int *) malloc(q.size * sizeof(int));

    // if(isEmpty(&q)){
    //     printf("Queue is empty.\n");
    // }
    for(j = 1; j <= n; j++){
        printf("Enter the element %d : ", j);
        int data;
        scanf("%d", &data);
        enQueue(&q, data);
    }

    // printf("Dequeued element is %d\n", deQueue(&q));
    // printf("Dequeued element is %d\n", deQueue(&q));

    // if(isEmpty(&q)){
    //     printf("Queue is empty.\n");
    // }
    // else{
    //     printf("Queue is not empty.\n");
    // }
    while(i < q.size){
        printf("Data in queue %d is - %d\n", (i + 1), q.arr[i]);
        i++;
    }

    return 0;
}