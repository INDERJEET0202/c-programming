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
    struct queue q; 
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    // BFS Implementation
    int u;
    int i = 0;
    int visited[7] = {0,0,0,0,0,0,0};
    int a[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };
    printf("%d", i);
    visited[i] = 1;
    enQueue(&q, i); //Enqueue i for exploration
    while(!isEmpty(&q)){

        int node = deQueue(&q); //Dequeue a node
        for (int j = 0; j < 7; j++)
        {
            if(a[node][j] == 1 && visited[j] == 0){
                printf("%d", j);
                visited[j] = 1;
                enQueue(&q, j);
            }
        }
        
    }
    return 0;
}