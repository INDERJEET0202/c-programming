#include <stdio.h>
#include <stdlib.h>

struct circularQueue{
    int f;
    int r;
    int * arr;
    int size;
};

int isFull(struct circularQueue * q){
    if(((q -> r + 1) % q -> size) == q -> f){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct circularQueue *q){
    if(q -> r == q -> f){
        return 1;
    }
    else{
        return 0;
    }
}

void enQueue(struct circularQueue * q, int val){
    if(isFull(q)){
        printf("Data could not be entered cuz this Queue is full.\n");
    }
    else{
        printf("Enqueued element %d\n", val);
        q -> r = q -> r + 1 % q -> size;
        q -> arr[q -> r] = val;
    }
}

int deQueue(struct circularQueue * q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is Empty.\n");
    }
    else{
        q -> f = (q -> f + 1) % q -> size;
        a = q -> arr[q -> f];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enQueue(&q, 12);
    enQueue(&q, 15);
    enQueue(&q, 1); 
    printf("Dequeuing element %d\n", deQueue(&q));
    printf("Dequeuing element %d\n", deQueue(&q));
    printf("Dequeuing element %d\n", deQueue(&q)); 
    enQueue(&q, 45);
    enQueue(&q, 45);
    enQueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}