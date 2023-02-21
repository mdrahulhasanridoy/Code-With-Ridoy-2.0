//large_number.c
//Author: Md. Rahul Hasan Ridoy
//Date: 18/02/2023

#include<stdio.h>
int main()
{
    int x, y, z;
    //Enter three inputs
    scanf("%d%d%d",&x,&y,&z);

    //Compare three inputs and print the largest number
    if(x>=y && x>=z)
    {
        printf("%d",x);
    }

    else
    {
        if(y>=x && y>=z)
        {
            printf("%d",y);
        }
        else
        {
            printf("%d",z);
        }
    }
    return 0;
}

//#p1