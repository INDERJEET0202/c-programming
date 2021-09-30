    #include <stdio.h>
    void main()
    {
 
        long int ARR[10], odd_arr[10], even_arr[10];
        int i, j = 0, k = 0, n;
 
        printf("Enter the size of array ARR : ");
        scanf("%d", &n);
 
        printf("Enter the elements of the array :");
        for (i = 0; i < n; i++)
        {
            scanf("%ld", &ARR[i]);
        }

        for (i = 0; i < n; i++)
        {
            if (ARR[i] % 2 == 0)
            {
                even_arr[j] = ARR[i];
                j++;
            }
            else
            {
                odd_arr[k] = ARR[i];
                k++;
            }
        }
 
        printf("The elements of odd_arr are ");
        for (i = 0; i < k; i++)
        {
            printf("%ld ", odd_arr[i]);
        }
 
        printf("\nThe elements of even_arr are ");
        for (i = 0; i < j; i++)
        {
            printf("%ld ", even_arr[i]);
        }
 
    }