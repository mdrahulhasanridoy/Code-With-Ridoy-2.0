// Question 2: There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C.You have chosen two cards and picked them up.Find the maximum possible sum of the integers written on the picked cards.

// The range of the  A,B,C -> 1-100

// >> Sample input -

// 3 4 5

// 6 6 6

// 99 99 98


// >> Sample output -

// 9

// 12

// 198
//Date: 28/02/2023

#include<stdio.h>

int main()

{

    int num1,num2,num3,mini;

    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1<num2 && num1<num3)

        mini=num1;

    else if(num2<num3)

        mini=num2;

    else

        mini=num3;


    int sum=(num1+num2+num3),ans;

    ans=(sum-mini);


    printf("%d\n",ans);

    return 0;

}