// Write a C program to take integer value as input and print that value. There is a twist! The input will contain a % sign.
// Sample Input:       //Sample Output:
// 5%                   //5

//Author: Md. Rahul Hasan Ridoy
//Date: 13/02/2023

#include<stdio.h>
int main()
{
    //Take integer value as input
    printf("Enter a integer value: ");
    int a;
    scanf("%d%%",&a);//%*c is used to ignore the % sign

    //Print that value
    printf("%d",a);

    return 0;
}

//Output: Enter a integer value: 5%
//        5