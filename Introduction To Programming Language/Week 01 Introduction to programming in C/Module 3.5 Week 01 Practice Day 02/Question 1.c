//Question 1: Write a C program to take two integers as input and show who is bigger. If they are equal print as it is. See the sample input output for more clarification.
// | Sample Input | Sample Output  |
// | ------------ | -------------- |
// | 5   10         | B is bigger    |
// | 10   2         | A is bigger    |
// | 4    4         | They are equal |

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int x, y;
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        printf("A is bigger");
    }
    else if(y>x)
    {
        printf("B is bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}

//Explanation: First enter two integer numbers.
// If x is bigger than y then print "A is bigger".
// If y is bigger than x then print "B is bigger".
// If x and y are equal then print "They are equal".