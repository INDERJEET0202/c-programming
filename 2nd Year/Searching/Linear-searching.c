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
    for(i = 0; i < elements; i++){
        if(array[i] == num){
            found = 1;
            pos = i;
            break;
        }
    }
    if(found == 1){
        printf("Element %d found at position %d\n",num, (pos+1));
    }
    else{
        printf("Element not found\n");
    }
}