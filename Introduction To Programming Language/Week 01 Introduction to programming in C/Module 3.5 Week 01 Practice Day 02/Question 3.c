//Question: Write a C program to take one non-negative integer as input and check if it is even or odd.
// | Sample Input | Sample Output |
// | ------------ | ------------- |
// | 5            | Odd           |
// | 8            | Even          |

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x%2==0)
        printf("Even");
    else
        printf("Odd");
    return 0;
}

//Explanation: Here we have taken one integer as input and then we have checked if the remainder of the integer when divided by 2 is equal to 0 or not. 
//If it is equal to 0 then it is an even number otherwise it is an odd number.