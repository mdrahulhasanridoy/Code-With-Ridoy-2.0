### Problem Solving using Looping Statements

Question 1: Calculate the total weight of passengers in a bus.
Draw the flowchart and write the program in C & Show manual tracing.

~ Flowchart ~

```mermaid
graph LR
A[Start] --> id1[ i = 1]
id1 --> |SUM=0|B{i<=n} -->|Yes| C[/ Input w/]
B --> |NO|D[/Print sum/] --> E[End]
C --> id2[sum += w] -->|i++|B
```
~ C Program ~

```c
#include<stdio.h>
int main()
{
    int n,w;
    int sum=0;
    printf("Enter the number of passengers: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&w);
        sum +=w;
    }

    printf("Total sum of weights = %d",sum);
    return 0;
}
```
~ Manual Tracing ~

input: 5

| i | w | sum |
|---|---|-----|
| 1 | 50 | 50 |
| 2 | 60 | 110 |
| 3 | 70 | 180 |
| 4 | 80 | 260 |
| 5 | 90 | 350 |

