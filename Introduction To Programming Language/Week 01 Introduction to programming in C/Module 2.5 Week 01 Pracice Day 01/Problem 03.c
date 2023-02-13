// Write a C program to take one positive integer as input and print double of it.
// Sample Input:       //Sample Output:
//5                    //10

//Author: Md. Rahul Hasan Ridoy
//Date: 13/02/2023

#include<stdio.h>
int main()
{
    //Take one positive integer as input
    printf("Enter a positive interger: ");
    int a;
    scanf("%d",&a);

    //Print double of it
    printf("Double of %d is %d",a,a*2);

    return 0;
}

//Output: Enter a positive interger: 5
//        Double of 5 is 10