//watermaloen_even_weight_with_equal.c
//Author: Md. Rahul Hasan Ridoy
//Date: 18/02/2023

//Question 1: Teacher buy a watermalon that's 14kg. He wants to give that watermalon to his 2 students. But, students wants it with even weight and equal weight.

#include<stdio.h>
int main()
{
    int w;
    printf("Enter the weight of the watermalon: ");
    scanf("%d",&w);

    if(w%4==0)
    {
        printf("Yes, it is possible to cut the watermalon with even weight and equal weight. And, each student will get %dkg watermalon.",w/2);
    }
    else
    {
        printf("No, it is not possible to cut the watermalon with even weight and equal weight.");
    }
    return 0;
}