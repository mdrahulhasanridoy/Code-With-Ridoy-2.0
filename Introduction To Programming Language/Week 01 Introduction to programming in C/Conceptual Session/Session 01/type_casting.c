//type_casting.c
//Author: Md. Rahul Hasan Ridoy
//Date: 14/02/2023

//Description: Write a program that prints the average of three integers and use type casting.

#include<stdio.h>
int main()
{
    //Take three integers from the user
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);

    int sum = a+b+c;
    float average = (float)sum/3;//type casting from int to float

    printf("Average = %.2f",average);
    return 0;
}

//Explanation: Take three integers from the user and store them in variables a, b and c.
//Then calculate the sum of these three integers and store the result in the variable sum.
//Then type cast the sum from int to float and store the result in the variable average.
//Finally, print the average of these three integers.