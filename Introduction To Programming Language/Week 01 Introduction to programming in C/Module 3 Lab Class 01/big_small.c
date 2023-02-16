//big_small.c
//Author: Md. Rahul Hasan Ridoy
//Date: 16/02/2023

#include<stdio.h>
int main()
{
    //variable declaration
    int x,y;
    printf("Enter two inputs: ");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("%d is bigger than %d",x,y);//if x is bigger than y then print x is bigger than y
    }
    else
    {
        printf("%d is smaller than %d",x,y);//if x is smaller than y then print x is smaller than y
    }
    return 0;
}
