//Problem 8:  Write a C program to find the largest of three numbers.
//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("Largest number is %d",a);
    }
    else if(b>a && b>c)
    {
        printf("Largest number is %d",b);
    }
    else
    {
        printf("Largest number is %d",c);
    }
    return 0;
}

/* Explanation: Here the program accepts three numbers from the user. Then, it compares the numbers and prints the largest number. */