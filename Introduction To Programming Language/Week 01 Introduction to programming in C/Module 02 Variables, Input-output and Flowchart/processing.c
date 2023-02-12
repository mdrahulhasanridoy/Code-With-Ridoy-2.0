//Problem number : 03
//processing.c
//Author : Md. Rahul Hasan Ridoy
//Date : 10/02/2023
//Description : This is a simple program to learn how to process input from the user.

#include<stdio.h> //This is a header file
int main() //This is the main funcation
{
    int a,b;//variable declaration

    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);

    int sum;
    sum = a+b;//process
    printf("The sum of the two numbers is %d",sum);
    return 0;
}

//Output: Enter two numbers : 10 20
//        The sum of the two numbers is 30