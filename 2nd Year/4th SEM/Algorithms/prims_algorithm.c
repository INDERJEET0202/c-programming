#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

#define V 7

int minKey(int key[], int mstSet[]){
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++){
        if (mstSet[v] == 0 && key[v] < min){
            min = key[v];
            min_index = v;
        }
    }
    printf("%d\n", min_index);
    return min_index;
}

int printMST(int parent[], int graph[V][V]){
    printf("Edge \tWeight\n");
    int cost = 0;
    for (int i = 1; i < V; i++){
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
        cost += graph[i][parent[i]];
    }
    printf("Total Cost = %d", cost );
}

void primes_algo(int graph[V][V]) {
    int parent[V];
    int key[V];
    int mstSet[V];

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX; mstSet[i] = 0;
        parent[i] = -1;
    }
    key[0] = 0;
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet);
        mstSet[u] = 1;

        for (int v = 0; v < V; v++) {
            if (graph[u][v] && mstSet[v] == 0 && graph[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}


int main(){
    int graph[V][V] = {
        {0, 28, 0, 0, 0, 10, 0}, 
        {28, 0, 16, 0, 0, 0, 14},
        {0, 16, 0, 12, 0, 0, 0},
        {0, 0, 12, 0, 22, 0, 18},
        {0, 0, 0, 22, 0, 25, 24},
        {10, 0, 0, 0, 25, 0, 0},
        {0, 14, 0, 0, 18, 24, 0}
    };
    primes_algo(graph);
    return 0;
}