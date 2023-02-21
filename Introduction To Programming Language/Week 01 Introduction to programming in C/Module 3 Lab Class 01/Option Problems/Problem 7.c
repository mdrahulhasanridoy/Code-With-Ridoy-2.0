//Problem 7: Write a C program to accept the height of a person in centimeter and categorize the person according to their height. 
//Author: Md. Rahul Hasan Ridoy
//Date: 19/02/2023

#include<stdio.h>
int main()
{
    int height;
    printf("Enter height in centimeter: ");
    scanf("%d",&height);

    if(height<150)
    {
        printf("Dwarf");
    }
    else if(height>=151 && height<=165)
    {
        printf("Average");
    }
    else if(height>=166 && height<=175)
    {
        printf("Tall");
    }
    else
    {
        printf("Abnormal");
    }
    return 0;
}



/* Explanation: Here the program accepts height of a person in centimeters. Then, it categorizes it based on the height. 
If height is less than 150 centimeter, then the person is dwarf.
If the height is between 151 to 165 then it is categorized as average and if the height is between 165 to 175 then it is categorized as tall.*/