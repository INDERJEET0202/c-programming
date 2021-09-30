#include <stdio.h>

void main()
{
    int arr1[2][3][2], i, j, k;

    printf("\n\nRead a 3D array of size 3x3 and print the matrix :\n");

    /* Stored values into the array*/
    printf("Input elements in the matrix :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("element - [%d],[%d],[%d] : ", i, j, k);
                scanf("%d", &arr1[i][j][k]);
            }
        }
    }
    //Displaying values here
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                printf("%d  ", arr1[i][j][k]);
            }
            printf("\n");
        }
         printf("\n");
    }
} 