#include<stdio.h>
int perfect(int num){
    int sum = 0, i;
    for (i=1; i<=num/2; i++)
    {
        if (num%i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num){
        printf("%d is a perfect nummber.", num);
    }
    else
    printf("%d is not a perfect number." , num );

}
int main()
{
    int n ,i ,sum = 0;
    printf(" Enter the integer number: ");
    scanf("%d", &n);
    perfect(n);
    return 0;
}