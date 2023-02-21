//Question 4: Write a C program to take one non-negative integer as input and print the grade according to that input. The grade system is shown below

// 0-32-> F 

// 33-39-> D 

// 40-49 -> C

// 50-59-> B

// 60-69 -> A-

// 70-79-> A 

// 80-100-> A+

//| Sample Input | Sample Output |
// | ------------ | ------------- |
// | 65           | A-            |
// | 79           | A             |
// | 95           | A+            |
// | 19           | F             |

#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);

    if(x>=0 && x<=32)
        printf("F");
    else if(x>=32 && x<=39)
        printf("D");
    else if(x>=40 && x<=49)
        printf("C");
    else if(x>=50 && x<=59)
        printf("B");
    else if(x>=60 && x<=69)
        printf("A-");
    else if(x>=70 && x<=79)
        printf("A");
    else if(x>=80 && x<=100)
        printf("A+");
    return 0;
}

//Explanation: Here we have taken one integer as input and then we have checked if the integer is in the range of 0 to 32 or not. 
// If it is in the range then it is an F otherwise we have checked if it is in the range of 33 to 39 or not. 
// If it is in the range then it is a D otherwise we have checked if it is in the range of 40 to 49 or not. 
// If it is in the range then it is a C otherwise we have checked if it is in the range of 50 to 59 or not. 
// If it is in the range then it is a B otherwise we have checked if it is in the range of 60 to 69 or not. 
// If it is in the range then it is an A- otherwise we have checked if it is in the range of 70 to 79 or not. 
// If it is in the range then it is an A otherwise we have checked if it is in the range of 80 to 100 or not. 
// If it is in the range then it is an A+ otherwise it is an invalid input.