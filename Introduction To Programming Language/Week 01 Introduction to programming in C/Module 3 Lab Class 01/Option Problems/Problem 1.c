//Problem 1 : Write a C program to accept two integers and check whether they are equal or not.

//Author: Md. Rahul Hasan Ridoy
//Date : 15/02/2023

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(a==b){
        printf("%d & %d are equal",a,b);
    }
    else{
        printf("%d & %d are not equal",a,b);
    }

    return 0;
}

//Explanation: In this program, we have used the if-else statement to check whether the two integers are equal or not. 
//            If the two integers are equal, then the if block will be executed. Otherwise, the else block will be executed.