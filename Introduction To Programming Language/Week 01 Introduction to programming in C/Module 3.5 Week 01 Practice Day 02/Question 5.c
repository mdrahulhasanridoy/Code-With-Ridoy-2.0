//Question: Write a C program to take three non-negative integers as input and tell if it forms a valid triangle. A triangle is valid if sum of its two sides is greater than the third side. Print YES or NO. All sides must be valid (greater than 0).

// | Sample Input | Sample Output |
// | ------------ | ------------- |
// | 2  4  2      | NO            |
// | 6  3  2      | YES           |
// | 0  2 10      | NO            |
// | 4  2  8      | YES           |

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d",&x, &y, &z);

    if(x+y>z && x+z>y && y+z>x)
        printf("YES");
    else
        printf("NO");
    return 0;
}

//Explanation: Here we have taken three integers as input and then we have checked if the sum of any two integers is greater than the third integer or not. 
// If it is greater then it is a valid triangle otherwise it is not a valid triangle.