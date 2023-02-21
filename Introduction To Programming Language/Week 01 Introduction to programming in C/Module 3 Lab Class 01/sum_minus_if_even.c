//sum_minus_if_even.c
//Author: Md. Rahul Hasan Ridoy
//Date: 18/02/2023

//Description: If x is even, then print a+b. If x is not even, then print a-b. Write a program to solve this problem.

#include<stdio.h>
int main()
{
    int x,a,b,s;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of a: ");
    scanf("%d",&a);
    
    printf("Enter the value of b: ");
    scanf("%d",&b);

    if(x%2==0)
    {
        s=a+b;
        printf("The sum of a and b is %d",s);
    }
    else
    {
        s=a-b;
        printf("The minus of a and b is %d",s);
    }
    return 0;
}

