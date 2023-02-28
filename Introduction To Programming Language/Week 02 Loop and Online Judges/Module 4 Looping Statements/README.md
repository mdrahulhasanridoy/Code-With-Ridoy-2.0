#### Looping Statements

Question 1: Draw a flowchart to print "Hello World" 10 times using for loop in marmaid.


```mermaid
graph LR
A[Start] --> B[/Input N/]
B --> id1[ i = 0 ] --> D{i == N ? }
D --> |Yes|E[End]
D --> |NO|F[/Print Hello/]
F --> id2[ i++] --> D

```
Question 2: Draw a flowchart sum 1+2+3+.....+N using for loop in marmaid.

```mermaid
graph LR
A[Start] --> B[/Input N/]
B --> id1[ i = 1 ] --> id2[ sum = 0 ] --> C{i <= N ? }
C --> |Yes|id3[sum = sum + i] --> id4[i++] --> C
C --> |NO|D[/Print sum/] --> E[End]
```
### While Loop

Syntax: 
    
    ```c
    while(condition){
        //statements
    }
    ```
i++ means i = i + 1
i-- means i = i - 1
increment and decrement operator


initialization
while(condition){
    //statements
    increment/decrement
}

### for loop

Syntax: 
    
    ```c
    for(initialization; condition; increment/decrement){
        //statements
    }
    ```

### Comparison between while loop and for loop


```mermaid
graph LR
A[Start] --> B[/Input n/]
B --> C{ n > 1 }
C --> |No|D[/print n/] --> E[End]
C --> |Yes|F{ n % 2 = 0 ? }
F --> |Yes|id1[ n = n / 2 ]
F --> |No|id2[ n = 3 * n + 1 ]
id1  --> |Print|id3(( ))
id2  --> |Print|id3
id3  --> |Print|C
```
