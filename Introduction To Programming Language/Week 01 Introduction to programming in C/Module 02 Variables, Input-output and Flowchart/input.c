//Problem NUmber: 02
//input.c
//Author: Md. Rahul Hasan Ridoy
//Date: 10/02/2023
//Description: This is a simple program to take input from the user and print it on the screen.

#include<stdio.h> //This is a header file
int main() //This is the main function
{
    //Here we write the code
    //write input statement

    int a; //This is a variable declaration
    printf("Enter a number: ");//This is a output statement
    scanf("%d", &a);//This is a input statement

    printf("The variable of a is: %d", a);//This is a output statement
    return 0;//This is a return statement
}

//Output: Enter a number: 10
//        The variable of a is: 10