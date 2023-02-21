//Problem 6: You will be given three non-negative integers A,B and C. 
// You need to tell if these integers form an equilateral triangle (A triangle whose three sides are the same and each side contains a positive value). 
// If the answer is yes, print "Yes" otherwise "No".

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
    if(A==B && B==C && C==A)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}