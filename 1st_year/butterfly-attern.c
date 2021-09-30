// #include<stdio.h>
// int main()
// {
//     printf("Enter the row size(Odd Number):");
//     int row_size;
//     scanf("%d",&row_size);
//     int in,out,p;
//     int print_control_x=1;

//       for(out=1;out<=row_size;out++)
//        {
//            for(in=1;in<=row_size;in++)
//            {
//                if(in<=print_control_x || in>=row_size-print_control_x+1)
//                {
//                 printf("*");
//                  }
//                else
//                {
//                  printf(" ");
//                }
//              }
//            if(out<=row_size/2)
//         	   print_control_x++;
//            else
//               print_control_x--;
//             printf("\n");
//      }
// }





#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the row size(Even Number):");
    scanf("%d", &n);
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i >= j)  // upper left triangle
                printf("*");
            else
                printf(" ");
            if(i >= (2 * n - 1) - j) // upper right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
            if(i + j <= n - 1) // bottom left triangle
                printf("*");
            else
                printf(" ");
            if((i + n) <= j) // bottom right triangle
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}