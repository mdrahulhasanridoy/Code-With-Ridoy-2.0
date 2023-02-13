// Write a C program to take two positive integers as input and show the summation, subtraction and multiplication of those two numbers.
// Sample Input:        //Sample Output:
// 5 2                  //7 3 10

//Author: Md. Rahul Hasan Ridoy
//Date: 13/02/2023

#include<stdio.h>
int main()
{
    //Take two positoive integers as input
    printf("Enter two positive integers: ");

    int x,y;
    scanf("%d%d",&x,&y);

    //Show the summation, subtraction and multiplication of those two numbers
    printf("Summation of %d and %d is %d\n",x,y,x+y);
    printf("Subtraction of %d and %d is %d\n",x,y,x-y);
    printf("Multiplication of %d and %d is %d\n",x,y,x*y);

    return 0;
}

//Output: Enter two positive integers: 5 2
//        Summation of 5 and 2 is 7
//        Subtraction of 5 and 2 is 3
//        Multiplication of 5 and 2 is 10