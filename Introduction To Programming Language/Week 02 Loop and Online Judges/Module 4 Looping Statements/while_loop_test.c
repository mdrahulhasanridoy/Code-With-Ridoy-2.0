//while_loop_test.c
//Question: Write a program that prints every number even or odd for a given number n using while loop until n becomes 1.
//Even number: n/2
//Odd number: 3*n+1
//Author: Md. Rahul Hasan Ridoy
//Date: 01/03/2023

#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n>1)
    {
        printf("-->%d\n", n);
        if (n%2==0)
        {
            n = n/2;
        }
        else
        {
            n = 3*n+1;
        }
    }
    printf("-->%d\n", n);
    return 0;
}
