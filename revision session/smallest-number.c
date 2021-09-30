#include <stdio.h>
  
int main()  
{  
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d", &n );
    int a[n], i, *min;  
  
    printf("Please enter %d numbers.\n", n);  
    for(i = 0; i < n; i++)  
        scanf("%d", &a[i]);  
  
    min = a;  
    // min = &a[0];  
  
    for(i = 1; i < n; i++)  
    {  
        if( *(a + i) < *min)  
            *min = *(a + i);  

        // if( a[i] < *min)  
        //     *min = a[i]; 
    }  
  
    printf("Smallest element in The array is : %d\n", *min);  
  
    return 0;  
}