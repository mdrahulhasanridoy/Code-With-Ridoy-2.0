//Problem 10: Write a C program to find the eligibility of admission for a professional course based on the following criteria:
// Marks in Maths >=65
// Marks in Phy >=55
// Marks in Chem>=50
// Total in all three subject >=190
// or
// Total in Math and Physics >=140

//Author: Md. Rahul Hasan Ridoy
//Date: 21/02/2023

#include<stdio.h>
int main()
{
    int math, phy, chem, total, math_phy;
    printf("Eligibility Criteria :\n");
    printf("Marks in Maths =65\n");
    printf("and Marks in Phy =55\n");
    printf("and Marks in Chem =50\n");
    printf("and Total in all three subject =190\n");
    printf("or Total in Maths and Physics =140\n");
    printf("-------------------------------------\n");

    printf("Enter your marks in Maths: ");
    scanf("%d", &math);
    printf("Enter your marks in Physics: ");
    scanf("%d", &phy);
    printf("Enter your marks in Chemistry: ");
    scanf("%d", &chem);

    total = math + phy + chem;
    math_phy = math + phy;

    printf("Total marks: %d\n", total);
    printf("Total marks in Maths and Physics: %d\n", math_phy);

    if(math >= 65 && phy >= 55 && chem >= 50 && total >= 190)
    {
        printf("You are eligible for admission in this course.\n");
    }
    else if(math >= 65 && phy >= 55 && chem >= 50 && math_phy >= 140)
    {
        printf("You are eligible for admission in this course.\n");
    }
    else
    {
        printf("You are not eligible for admission in this course.\n");
    }


    return 0;
}

//Explanation: Here the program accepts the marks of three subjects from the user. Then, it checks the eligibility criteria and prints the result.