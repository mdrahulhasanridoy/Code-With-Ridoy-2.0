//Question 1: Write a program in C to display the first 10 natural numbers.
//Author: Md. Rahul Hasan Ridoy
//Date: 01/03/2023

//using while loop
#include<stdio.h>
int main()
{
    int i = 1;
    while(i<=10)
    {
        printf("%d", i);
        i++;
    }
    return 0;
}

//using for loop
// #include<stdio.h>
// int main()
// {
//     //for(initialization; condition; increment/decrement)
//     int i;
//     for( i = 1 ; i <=10 ; i++ )
//         printf("%d", i);
//     return 0;
// }