//Write a C program to take a character variable and input and show the corresponding ASCII value of that character
//Sample Input:       //Sample Output:
// A                  //   65
// C                  //   67
// a                  //   97
// d                  //   100

//Author: Md. Rahul Hasan Ridoy
//Date: 13/02/2023

#include<stdio.h>
int main()
{
    //Take a character variable and input
    char Character;//Character is a variable
    printf("Enter a character: ");
    scanf("%c",&Character);

    //Show the corresponding ASCII value of that character
    printf("ASCII valuse of that character: %d",Character);//ASCII value of that character is stored in Character

    return 0;
    }

//Output: Enter a character: A
//        ASCII valuse of that character: 65