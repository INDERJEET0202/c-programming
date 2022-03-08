#include<stdio.h>
#include<stdlib.h>

float KnapSack(float*, float*, int, float);
void MergeSort(float*, float*, float*, int, int);
void Merge(float*, float*, float*, int, int, int);

int main(){
	int n, i;
	printf("Enter number of elements: ");
	scanf("%d", &n);

	float* price = (float*)malloc(n * sizeof(float));
	float* weight = (float*)malloc(n * sizeof(float));

	printf("Enter all weights:\n");
	for (i = 0;i < n;i++){
		scanf("%f", weight + i);
	}

	printf("Enter all price:\n");
	for (i = 0;i < n;i++){
		scanf("%f", price + i);
	}

	float W;
	printf("Enter Weight of the bag:");
	scanf("%f", &W);
	printf("Total price: %0.1f", KnapSack(price, weight, n, W));
}

float KnapSack(float price[], float weight[], int n, float capacity){

	float T = 0.0;
	float* ratio = (float*)malloc(n * sizeof(float));
	int i;
	for (i = 0; i < n; i++)
	{
		ratio[i] = price[i] / weight[i];
	}

	MergeSort(ratio, price, weight, 0, n - 1);
	i = 0;
	while (capacity > 0 && i < n){
		if (capacity > weight[i]){
			T = T + price[i];
			capacity = capacity - weight[i];
			i++;
		}

		else{
			T = T + capacity * ratio[i];
			break;
		}
	}
	return T;
}

void MergeSort(float ratio[], float price[], float weight[], int low, int high){
	int mid;
	if (low < high){
		mid = (high + low) / 2;
		MergeSort(ratio, price, weight, low, mid);
		MergeSort(ratio, price, weight, mid + 1, high);
		Merge(ratio, price, weight, low, high, mid);
	}

}


void Merge(float ratio[], float price[], float weight[], int low, int high, int mid){ 
	float* ratio2 = (float*)malloc((high - low + 1) * sizeof(float));
	float* price2 = (float*)malloc((high - low + 1) * sizeof(float));
	float* weight2 = (float*)malloc((high - low + 1) * sizeof(float));

	int k = 0;
	int i = low;
	int j = mid + 1;

	while (i <= mid && j <= high){
		if (ratio[i] > ratio[j]){
			ratio2[k] = ratio[i];
			price2[k] = price[i];
			weight2[k] = weight[i];
			i++;
		}

		else{
			ratio2[k] = ratio[j];
			price2[k] = price[j];
			weight2[k] = weight[j];
			j++;
		}

		k++;
	}

	while (i <= mid){
		ratio2[k] = ratio[i];
		price2[k] = price[i];
		weight2[k] = weight[i];
		i++;
		k++;
	}

	while (j <= high){
		ratio2[k] = ratio[j];
		price2[k] = price[j];
		weight2[k] = weight[j];
		j++;
		k++;
	}

	for (i = low;i <= high;i++){
		ratio[i] = ratio2[i - low];
		price[i] = price2[i - low];
		weight[i] = weight2[i - low];
	}
}

