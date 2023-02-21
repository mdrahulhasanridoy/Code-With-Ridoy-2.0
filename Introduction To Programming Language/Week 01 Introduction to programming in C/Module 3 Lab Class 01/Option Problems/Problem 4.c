//Problem 4:  Write a C program to find whether a given year is a leap year or not
//Author : Md. Rahul Hasan Ridoy
//Date: 19/02/2023

#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);

    if(year%400==0)
    {
        printf("%d is a leap year",year);
    }
    else if(year%100==0)
    {
        printf("%d is not a leap year",year);
    }
    else if(year%4==0)
    {
        printf("%d is a leap year",year);
    }
    else
    {
        printf("%d is not a leap year",year);
    }

    return 0;

}

//Explation:    year%400==0 means if the year is divisible by 400 then it is a leap year. 
//              year%100==0 means if the year is divisible by 100 then it is not a leap year. 
//              year%4==0 means if the year is divisible by 4 then it is a leap year.
//              If the year is not divisible by 400, 100 and 4 then it is not a leap year.