#include <stdio.h>

int main(){
    printf("Enter number of processes: \n");
    int processes = 0;
    scanf("%d", &processes);
    int exectime[processes];
    for (int i = 0; i < processes; i++){
        printf("Enter execution time of process %d:", i+1);
        scanf("%d", &exectime[i]);
    }

    printf("PID \t\t\tBrust Time\n");
    for (int k =0 ; k < processes; k++){
        printf("P%d \t\t\t\t%d\n", k+1, exectime[k]);
    }

    printf("PID \t    Waiting Time \t    Brust Time \tTurn Around Time\n");
    int waiting_time = 0;
    for (int k =0 ; k < processes; k++){
        printf("P%d \t\t %d \t\t\t%d \t\t%d \t\t\n", k+1, waiting_time, exectime[k], 0 + exectime[k]);
        waiting_time+=exectime[k];
    }
    return 0;

}