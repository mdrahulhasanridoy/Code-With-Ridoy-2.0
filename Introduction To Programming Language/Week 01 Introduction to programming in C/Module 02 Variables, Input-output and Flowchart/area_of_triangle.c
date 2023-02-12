//Problem Number: 06
//area_of_triangle.c
//Author: Md. Rahul Hasan Ridoy
//Date: 10/02/2023
//Description: This is a simple program to calculate the area of a triangle in C.

#include<stdio.h> //header file
int main()//main function
{
    float base, height;//variable declaration //float is used for decimal value
    printf("Enter the base of the triangle: ");
    scanf("%f",&base);//input value

    printf("Enter the height of the triangle: ");
    scanf("%f",&height);

    float area;
    area = 1.5*base*height;//formula for area of triangle

    printf("The area of a triangle: %f",area);

    return 0;
}

//Output:
//Enter the base of the triangle: 5
//Enter the height of the triangle: 6
//The area of a triangle: 30.000000