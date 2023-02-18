//largest_number.c
//Author: Md. Rahul Hasan Ridoy
//Date: 16/02/2023

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three inputs: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
    return 0;
}