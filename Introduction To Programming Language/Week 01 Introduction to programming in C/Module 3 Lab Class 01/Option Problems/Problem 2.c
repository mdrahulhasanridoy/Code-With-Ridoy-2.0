//Problem 2 : Write a C program to check whether a given number is even or odd. 

//Author: Md. Rahul Hasan Ridoy
//Date: 15/02/2023

#include<stdio.h>
int main()
{
    //Variable declaration
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    if(x%2==0)
    {
        printf("%d is even",x);
    }
    else
    {
        printf("%d is odd",x);
    }
    return 0;
}

//Explanation: First we have to take a number from the user.
//             Then we have to check whether the number is divisible by 2 or not.
//             If the number is divisible by 2 then it is even.
//             If the number is not divisible by 2 then it is odd.
//             Then we have to print the result.
