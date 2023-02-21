//Problem 5: Write a C program to read the age of a candidate and determine whether it is eligible for casting his/her own vote.
//Author: Md. Rahul Hasan Ridoy
//Date: 19/02/2023

#include<stdio.h>
int main()
{
    int a;
    printf("Enter Age: ");
    scanf("%d",&a);

    if(a>=18)
    {
        printf("Eligible for vote");
    }
    else
    {
        printf("Not eligible for vote.\n");
        printf("You will be able to vote after %d years",18-a);
    }
    return 0;
}

//Explation:    If the age is greater than or equal to 18 then the candidate is eligible for casting his/her own vote.
//              If the age is less than 18 then the candidate is not eligible for casting his/her own vote.
//              If the age is less than 18 then the candidate will be able to vote after 18-a years.