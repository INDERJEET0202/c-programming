#include <stdio.h>
#include <stdlib.h>

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

void DFS(int i){
    int j;
    printf("%d", i);
    visited[i] = 1;
    for(j = 0; j < 7; j++){
        if(a[i][j] == 1 && visited[j] == 0){
            DFS(j);
        }
    }
}

int main()
{
    int starting_node;
    printf("Enter the number where to start - ");
    scanf("%d", &starting_node);
    DFS(starting_node);
    return 0;
}