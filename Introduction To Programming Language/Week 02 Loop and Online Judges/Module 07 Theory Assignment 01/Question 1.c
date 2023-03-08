//WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n must be an odd number). Then calculate sum of the integers at first row, last row and two diagonals without overlap. Please see the sample input-output
//Sample input
// 5
// 1 2 3 4 5
// 2 3 4 1 6
// 3 4 9 6 7
// 4 2 6 7 8
// 5 4 3 2 1

// Sample output 
// 52

#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    scanf("%d", &n);
    int a[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[0][i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[n - 1][i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][i];
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i][n - 1 - i];
    }
    sum = sum - a[0][0] - a[0][n - 1] - a[n - 1][0] - a[n - 1][n - 1];
    printf("%d", sum);
    return 0;
}