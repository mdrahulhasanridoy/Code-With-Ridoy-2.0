//Question 3: Write a program in C to display n terms of natural number and their sum.
//Author: Md. Rahul Hasan Ridoy
//Date: 01/03/2023

//using for loop
// #include<stdio.h>
// int main()
// {
//     int n,sum=0;
//     printf("Enter the number of terms: ");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++)
//     {
//         printf("%d ",i);
//         sum=sum+i;
//     }
//     printf("The sum of the first %d natural numbers is %d",n,sum);
//     return 0;
// }


//using while loop
#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    while(i<=n)
    {
        printf("%d ",i);
        sum=sum+i;
        i++;
    }
    printf("The sum of the first %d natural numbers is %d",n,sum);
    return 0;
}
