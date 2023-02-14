//sum_three_interger.c
//Author: Md. Rahul Hasan Ridoy
//Date: 14/02/2023

//Description: Write a program that prints the sum of three integers. Each integer should be given on a separate line.

#include<stdio.h>
int main()
{
    //1st integer
    printf("Enter the first integer: ");
    int a;
    scanf("%d",&a);

    //2nd integer
    printf("Enter the second integer: ");
    int b;
    scanf("%d",&b);

    //3rd integer
    printf("Enter the third integer: ");
    int c;
    scanf("%d",&c);

    //sum of three integers
    printf("The sum of three integers : %d",a+b+c);

    return 0;
}

//Explanation: Here we have declared three variables a, b and c.
//Then we have printed the message "Enter the first integer: " and scanned the value of a.
//Then we have printed the message "Enter the second integer: " and scanned the value of b.
//Then we have printed the message "Enter the third integer: " and scanned the value of c.
//Then we have printed the sum of three integers.
//The output will be the sum of three integers.

// integer + integer = integer
// integer + float = float
// float + float = float