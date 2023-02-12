//Problem number : 04
//circle_area.c
//Author : Md. Rahul Hasan Ridoy
//Date : 10/02/2023
//Description : This is a simple program to calculate the area of a circle in C.

#include<stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    float area;
    scanf("%f", &area);
    area = 3.1416*radius*radius;
    printf("The area of the circle is: %f", area);
    return 0;
}

//Calculate the area of a circle formula : pi*r*r