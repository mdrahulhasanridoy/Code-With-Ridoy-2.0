//average_three_interger.c
//Author: Md. Rahul Hasan Ridoy
//Date: 14/02/2023

//Description: Write a program that prints the average of three integers.

#include<stdio.h>
int main()
{
    //Take three integers from the user and store them in variables a, b and c.
    int a,b,c;
    float average;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    average = (a+b+c)/3.0;//Calculate the average of these three integers and store the result in the variable average.
    printf("Average = %.2f",average);
    return 0;
}

/* Explanation: Take three integers from the user and store them in variables a, b and c.
Then calculate the average of these three integers and store the result in the variable average.
Finally, print the average of these three integers. */