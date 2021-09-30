// #include<stdio.h>

// struct details
// {
//      char name[20];
//      int bal;
//      int account_num;
// }b[3];

// void bal_check(struct details b[],int n) 
// {
//      int j;
//      printf("\nCustomer details whose balance less than 100 Rs. \n");
//      for(j = 0; j < n; j++)
//      {
//           if(b[j].bal < 100)
//           {
//                printf("Account Number : %d\n",b[j].account_num);
//                printf("Name : %s\n",b[j].name);

//           }
//      }
// }

// int main()
// {
//      int i;
//      for(i = 0; i < 3; i++)
//      {
//           printf("Enter details of customer no - %d;\n", i+1);

//           printf("Account number : ");
//           scanf("%d",&b[i].account_num);

//           printf("name : ");
//           scanf("%s",b[i].name);

//           printf("balance : ");
//           scanf("%d",&b[i].bal);
//      }
//      bal_check(b, 3);
//      return 0;
// }




#include <stdio.h>

struct bank
{
     char name[30];
     int acc_no;
     int bal;
};

int main()
{
     struct bank a[3];
     struct bank *ptr;
     ptr = a;
     int i,j;

     for (i =0; i< 3; i++)
     {
     printf("Enter account details of customer %d\n", i + 1);
     printf("Enter name: ");
     scanf("%s",&(ptr+i) -> name); 
     printf("Enter account number - ");
     scanf("%d", &(ptr+i)-> acc_no);

     printf("Enter account balance - ");
     scanf("%d", &(ptr+i)-> bal);

     }

     for (j = 0; j< 3; j++)
     {
          if((ptr+j)-> bal < 100)
               printf("nCustomer details whose balance less than 100 Rs. %s\n", (ptr+j)-> name);
               printf("Account number : %d\n", (ptr+j)-> acc_no);
     }

     return 0;
}