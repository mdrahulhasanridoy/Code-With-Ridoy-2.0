//big_small_equal.c
//Author: Md. Rahul Hasan Ridoy
//Date: 16/02/2023

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two inputs: ");
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        printf("%d is bigger number",x);//if x is bigger than y then print x is bigger number
    }
    else if(x<y)
    {
        printf("%d is bigger number",y);//if x is smaller than y then print y is bigger number
    }
    else
    {
        printf("Both are equal");//if x is equal to y then print both are equal
    }
    return 0;
}
