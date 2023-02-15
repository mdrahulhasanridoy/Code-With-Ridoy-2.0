//Problem 3 : Write a C program to check whether a given number is positive or negative.

//Author: Md. Rahul Hasan Ridoy
//Date: 15/02/2023

#include<stdio.h>
int main()
{
    //Variable declaration
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    //Check whether the number is positive or negative
    if(x>=0)
    {
        printf("%d is positive number",x);
    }
    else
    {
        printf("%d is negative number",x);
    }
    return 0;
}

//Explanation: First we have to take a number from the user.
//             Then we have to check whether the number is positive or negative.
//             If the number is positive then it is positive number.
//             If the number is negative then it is negative number.
//             Then we have to print the result.