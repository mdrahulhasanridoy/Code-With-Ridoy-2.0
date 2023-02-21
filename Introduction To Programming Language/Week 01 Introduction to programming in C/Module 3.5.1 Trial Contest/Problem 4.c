//Problem 4: Rahim has X% share, Karim has Y% share and Habib has (X*Y)% share of the company Zeta. Can you tell the amount of share of Habib?
//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d%% %d%%",&X,&Y);
    printf("%d%%",X*Y);
    return 0;
}