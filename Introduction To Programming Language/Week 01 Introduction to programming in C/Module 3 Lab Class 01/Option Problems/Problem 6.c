//Problem 6: Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.
//Author: Md. Rahul Hasan Ridoy
//Date: 19/02/2023


#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the value of m: ");
    scanf("%d",&m);

    if(m!=0)
    {
        if(m>0)
        {
            n=1;
        }
        else
        {
            n=-1;
        }
    }
    else
    {
        n=0;
    }
    printf("The value of m is %d \n",m);
    printf("The value of n is %d",n);
    return 0;
}

//Explation:    If m is not equal to 0 then check if m is greater than 0 or not.
//              If m is greater than 0 then n=1.
//              If m is not greater than 0 then n=-1.
//              If m is equal to 0 then n=0.