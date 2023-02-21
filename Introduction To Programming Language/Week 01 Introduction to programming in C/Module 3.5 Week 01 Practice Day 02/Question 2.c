//Question 2: Write a C program to take three integers as input and show who is bigger. If they are equal print as it is. See the sample input output for more clarification.
//| Sample Input | Sample Output  |
// | ------------ | -------------- |
// | 5   10  4    | B is bigger    |
// | 10  2   5    | A is bigger    |
// | 4   4   7    | C is bigger    |
// | 10  10  10   | They are equal |

// Bonus Task, try if you can do this also

// | Sample Input | Sample Output           |
// | ------------ | ----------------------- |
// | 2  10  10    | B and C both are bigger |
// | 5   3   5    | A and C both are bigger |
// | 7   7   5    | A and B both are bigger |

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d",&x,&y,&z);

    if((x>y) && (x>z))
    {
        printf("A is bigger");
    }
    else if((y>x) && (y>z))
    {
        printf("B is bigger");
    }
    else if ((z>x) && (z>y))
    {
        printf("C is bigger");
    }
    else if((x==y) && (x>z))
    {
        printf("A and B both are bigger");
    }
    else if((z==y) && (z>x))
    {
        printf("B and C both are bigger");
    }
    else if((x==z) && (x>y))
    {
        printf("A and C both are bigger");
    }
    else
    {
        printf("They are equal");
    }

    return 0;
}