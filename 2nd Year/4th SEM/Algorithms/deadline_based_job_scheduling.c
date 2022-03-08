//  J1   J2   J3   J4   J5   J6   J7 --> Job Names
//  2    4    3    5    1    3    4 --> Deadlines
// 120  180  300  250  100  200  75 --> Profits


#include<stdio.h>
#include<stdlib.h>

void MergeSort(float*, float*, int, int);
void Merge(float*, float*, int, int, int);

void printArray(float* A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("%0.1f ", A[i]);
    }
    printf("\n");
}

int total_profit(float* profits, float* deadlines, int n, int d_line){
    MergeSort(profits, deadlines, 0, n - 1);
    // printArray(profits, n);
    // printArray(deadlines, n);
    int* plan = (int*) malloc(d_line * sizeof(int));
    for(int i = 0; i < d_line; i++){
        plan[i] = -1;
    }
    int profit = 0;
    for(int i = 0; i < n; i++){
        int j = 0;
        while(j < d_line && plan[j] != -1){
            j++;
        }
        if(j < d_line){
            plan[j] = i;
            profit += profits[i];
        }
    }
    return profit;
}

int main(){
	int n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	float* deadlines = (float*)malloc(n * sizeof(float));
	float* profits = (float*)malloc(n * sizeof(float));

	printf("Enter all profits:\n");
	for (i = 0;i < n; i++){
		scanf("%f", profits + i);
	}

	printf("Enter all deadlines  of each job:\n");
	for (i = 0;i < n; i++){
		scanf("%f", deadlines + i);
	}

	int d_line;
	printf("Enter deadline:");
	scanf("%d", &d_line);
    int profit = total_profit(profits, deadlines, n, d_line);
    printf("Total profit is: %d", profit);
}

void MergeSort(float profits[], float deadlines[], int low, int high){
	int mid;
	if (low < high){
		mid = (high + low) / 2;
		MergeSort(profits, deadlines, low, mid);
		MergeSort(profits, deadlines, mid + 1, high);
		Merge(profits, deadlines, low, high, mid);
	}
}


void Merge(float profits[], float deadlines[], int low, int high, int mid){ 
	float* profits2 = (float*)malloc((high - low + 1) * sizeof(float));
	float* deadlines2 = (float*)malloc((high - low + 1) * sizeof(float));

	int k = 0;
	int i = low;
	int j = mid + 1;

	while (i <= mid && j <= high){
		if (profits[i] > profits[j]){
			profits2[k] = profits[i];
			deadlines2[k] = deadlines[i];
			i++;
		}

		else{
			profits2[k] = profits[j];
			deadlines2[k] = deadlines[j];
			j++;
		}

		k++;
	}

	while (i <= mid){
		profits2[k] = profits[i];
		deadlines2[k] = deadlines[i];
		i++;
		k++;
	}

	while (j <= high){
		profits2[k] = profits[j];
		deadlines2[k] = deadlines[j];
		j++;
		k++;
	}

	for (i = low;i <= high;i++){
		profits[i] = profits2[i - low];
		deadlines[i] = deadlines2[i - low];
	}
}

