//Question 2: Write a C program to find the sum of the first 10 natural numbers.
//Author: Md. Rahul Hasan Ridoy
//Date: 01/03/2023

//using for loop
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=10;i++)
    {
        sum=sum+i;
    }
    printf("The sum of the first 10 natural numbers is %d",sum);
    return 0;
}

//using while loop
// #include<stdio.h>
// int main()
// {
//     int i=1,sum=0;
//     while(i<=10)
//     {
//         sum=sum+i;
//         i++;
//     }
//     printf("The sum of the first 10 natural numbers is %d",sum);
//     return 0;
// }
    