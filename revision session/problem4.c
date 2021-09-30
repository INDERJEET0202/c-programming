
#include <stdio.h>
int main()
{
    int a[1000], i, n, even=0, odd=0;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
    
    printf("Enter elements in array : ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
 
     for(i = 0; i < n; i++)
    {
          if(a[i] % 2 == 0)

          even++;

          else
          
          odd++;          
    }
     printf("Even numbers in the array: %d",even);
     printf("\n Odd numbers in array: %d",odd);
 
 
    return 0;
}