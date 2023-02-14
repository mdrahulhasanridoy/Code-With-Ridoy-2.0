//number.c
//Author: Md. Rahul Hasan Ridoy
//Date: 14/02/2023

//Description: Difference between %d and %i

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("The value of a is %d, %i",a,a);//%d and %i are same

    return 0;
}

//Explanation: Here we have declared a variable a.
//Then we have printed a message to enter a number.
//Then we have scanned the value of a.
//Then we have printed the value of a.
//The output will be the value of a.