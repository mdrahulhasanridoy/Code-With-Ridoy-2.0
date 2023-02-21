//Problem 9: Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.
//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the coordinate point: ");
    scanf("%d %d",&x,&y);

    if(x>0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the First quadrant.",x,y);
    }
    else if(x<0 && y>0)
    {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.",x,y);
    }
    else if(x<0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.",x,y);
    }
    else if(x>0 && y<0)
    {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.",x,y);
    }
    else
    {
        printf("The coordinate point (%d,%d) lies on the axis.",x,y);
    }
    return 0;
}