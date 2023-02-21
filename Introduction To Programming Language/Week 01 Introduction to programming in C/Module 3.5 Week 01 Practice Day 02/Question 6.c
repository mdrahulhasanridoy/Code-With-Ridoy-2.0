//Question 6: You have got X marks in your exam. As you are a good and regular student, if you ask your teacher he/she can give you at most Y bonus marks. Now you need to tell if you take bonus marks will your number became 100? 

// Write a C program to take two non-negative integers X and Y as input and print YES or NO.
// ```

// | Sample Input | Sample Output |
// | ------------ | ------------- |
// | 95   10      | YES           |
// | 80    5      | NO            |

#include<stdio.h>
int main()
{
    int X, Y;
    scanf("%d%d",&X,&Y);

    if(X+Y>=100)
        printf("YES");
    else
        printf("NO");
    return 0;
}

//Explanation: Here we have taken two integers as input and then we have checked if the sum of the two integers is greater than or equal to 100 or not.