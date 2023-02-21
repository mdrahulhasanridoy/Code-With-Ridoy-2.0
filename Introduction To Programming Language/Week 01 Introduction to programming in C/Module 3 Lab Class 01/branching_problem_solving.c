//branching_problem_solving.c
//Author : Md. Rahul Hasan Ridoy
//Date : 18/02/2023
/*
Question 1: Teacher buy a watermalon that's 14kg. He wants to give that watermalon to his 2 students. But, students wants it with even weight. 
So, teacher wants to know how much weight he should cut from the watermalon so that both students can get the watermalon with even weight.
Is it possible to cut the watermalon with even weight? If yes, then how much weight he should cut from the watermalon?
*/

#include<stdio.h>
int main()
{
    int weight;
    printf("Enter the weight of the watermalon: ");
    scanf("%d",&weight);

    if(weight%2==0 && weight!=2)
    {
        printf("Yes, it is possible to cut the watermalon with even weight.");
    else
    {
        printf("No, it is not possible to cut the watermalon with even weight.");
    }
    return 0;
}