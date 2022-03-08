#include <stdio.h>
#include <stdlib.h>

int main(){
    int elements, i, num, found = 0, pos = -1;
    printf("Enter the number of elements: ");
    scanf("%d", &elements);
    printf("Enter the elements: ");
    int *array = (int *)malloc(elements * sizeof(int));
    for(i = 0; i < elements; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &num);
    int beg = 0, end = elements - 1;
    while(beg <= end){
        int mid = (beg + end) / 2;
        if(array[mid] == num){
            found = 1;
            pos = mid;
            printf("Element %d found at position %d\n",num, (pos+1));
            break;
        }
        else if(array[mid] < num){
            beg = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    if(found == 0 && beg > end){
        printf("Element not found\n");
    }
    return 0;
}




#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l) {
		int mid = l + (r - l) / 2;
		if (arr[mid] == x)
			return mid;
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		return binarySearch(arr, mid + 1, r, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int x = 10;
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
