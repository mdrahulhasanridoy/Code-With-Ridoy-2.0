//branching.c
//Author: Md. Rahul Hasan Ridoy
//Date: 16/02/2023

#include<stdio.h>
int main()
{
    int x;
    printf("Enter an input: ");
    scanf("%d",&x);
    

if(x%2==0)
{
    printf("The number is even");
}
else
{
    printf("The number is odd");
}
    return 0;
}  

//Explanation: Take an input from the user and check whether the number is even or odd. 
//If the number is even then print “The number is even” otherwise print “The number is odd”.