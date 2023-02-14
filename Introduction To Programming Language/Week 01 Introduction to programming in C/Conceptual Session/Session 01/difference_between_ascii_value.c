//difference_between_ascii_value.c
//Author: Md. Rahul Hasan Ridoy
//Date: 14/02/2023

//Description : Write a program that print the difference between ASCII value of two characters.

#include<stdio.h>
int main()
{
    char a,b;
    int difference;

    scanf("%c %c",&a,&b);

    difference = a - b;

    printf("%d",difference);

    return 0;
}

//Explanation: Here we have declared three variables a, b and difference.
//Then we have scanned the value of a and b.
//Then we have calculated the difference between ASCII value of a and b.
//Then we have printed the value of difference.
//The output will be the difference between ASCII value of a and b.