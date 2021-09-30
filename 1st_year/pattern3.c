//   *
//  **
// ***
/*#include <stdio.h>
int main()
{
    int n, row , space, star;
    printf("Enter number of rows do you want : ");
    scanf("%d", &n);
    for (row = 1; row<= n; row++ ){
        for(space = 1; space<= (n-row); space++)
        printf(" ");
        for(star =1 ; star<= row; star++)
        printf("*");
        printf("\n");
    }
}
*/
#include <stdio.h>
int main()
{
    int i, j, row;
    printf("Enter number of rows you want :");
    scanf("%d", &row);
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row; j++)
        {
            if ((i + j) <= row)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
}