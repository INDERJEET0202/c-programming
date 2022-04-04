#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 5
// int debug = 0;

int minKey(int key[], int mstSet[]){
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++){
        if (mstSet[v] == 0 && key[v] < min){ 
            min = key[v];
            min_index = v;
        }
    }
    printf("Minimum index is: %d\n", min);
    return min_index;
}

int printMST(int parent[], int graph[V][V]){
    printf("Edge \tWeight\n");
    int cost = 0;
    for (int i = 1; i < V; i++){
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
        cost += graph[i][parent[i]];
    }
    printf("Total Cost = %d\n", cost );
}

void printarray(int parent[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", parent[i]);
    }
    printf("\n");
}

void primes_algo(int graph[V][V]) {
    int key[V];
    int mstSet[V];
    int parent[V];

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = 0;
        parent[i] = -1;
    }
    key[0] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet); //index with minumum possible key value and not in mstSet
        mstSet[u] = 1; //adding to mstSet
        for (int v = 0; v < V; v++) {
        // int debug = 0;
            if (graph[u][v] != 0 && mstSet[v] == 0 && graph[u][v] < key[v]){ //if edge exists and not in mstSet and edge weight is less than key
                parent[v] = u; //update parent
                key[v] = graph[u][v]; //update key
                // debug = 1;
                printf("%d value at position %d %d\n", graph[u][v],u , v);
            }
            // printf("%d\n", debug); 
            // printarray(parent, V);
            // printarray(key, V);
            // printarray(mstSet, V);
        }
    }
    printMST(parent, graph);
    printarray(parent, V);
}


int main(){
    int graph[V][V] = {
        {0, 9, 75, 0, 0},
        {9, 0, 95, 19, 42},
        {75, 95, 0, 51, 66},
        {0, 19, 51, 0, 31},
        {0, 42, 66, 31, 0}
    };
    // int graph[V][V] = {
    //     {0, 28, 0, 0, 0, 10, 0}, 
    //     {28, 0, 16, 0, 0, 0, 14},
    //     {0, 16, 0, 12, 0, 0, 0},
    //     {0, 0, 12, 0, 22, 0, 18},
    //     {0, 0, 0, 22, 0, 25, 24},
    //     {10, 0, 0, 0, 25, 0, 0},
    //     {0, 14, 0, 0, 18, 24, 0}
    // };
    // printf("%d", graph[0][1]);
    primes_algo(graph);
    return 0;
}