//bus.c
//Author: Md. Rahul Hasan Ridoy
//Date: 08/03/2023

//Question: Calculate the total weight of passengers in a bus & show Manual Tracing.

#include<stdio.h>
int main()
{
    int n,w;
    int sum=0;
    printf("Enter the number of passengers: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum +=w;
    }

    printf("Total sum of weights = %d",sum);
    return 0;
}

//Manual Tracing:
//n=5
//w=50
//sum=0
//i=1
//sum=0+50=50
//i=2
//sum=50+60=110
//i=3
//sum=110+70=180
//i=4
//sum=180+80=260
//i=5
//sum=260+90=350
//sum=350