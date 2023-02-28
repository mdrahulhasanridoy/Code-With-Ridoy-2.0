### Question 1: Mr. A has a grid that has N rows and M columns. Each row is numbered from 1 to N from top to bottom. Each column is numbered from 1 to M from left to right. 

Each tile in the grid contains a number. The numbers are arranged as follows:

Row 1 contains integers from 1 to M from left to right.

Row 2 contains integers from M+1 to 2*M from left to right.

Row 3 contains integers from 2*M+1 to 3*M from left to right.

And so on until row N.

A domino is defined as two different tiles in the grid that touch by their sides. A domino is said to be tight if the two numbers in the domino have a different of exactly 1. Count the number of distinct tight dominoes in the grid.

Two dominoes are said to be distinct if and only if there exists at least one tile that is in one domino, but not in the other.

Solution Explanation :

N ➡️ Number of rows
M ➡️ Number of columns

If N = 3 and M = 4, then the grid will look like this:

| 1   | 2   | 3   | 4   |
| --- | --- | --- | --- |
| 5   | 6   | 7   | 8   |
| 9   | 10  | 11  | 12  |

How to find dominoes?
There are two ways to find dominoes:
1. Find dominoes by rows
2. Find dominoes by columns

Tight dominoes : (1,2), (2,3), (3,4), (5,6), (6,7), (7,8), (9,10), (10,11), (11,12)
Absoulte difference between two numbers in a domino is 1. So, the dominoes are tight.

Total tight dominoes = 9

### Question 2: There are three cards on the desk, each with a positive integer written on it. The integers on the cards are A, B, and C. You have to choose teo cards and picked them up. Find the maximum possible sum of the integers written on the picked cards.

The range of the A,B,C -> 1-100

Sample Input:

3 4 5
6 6 6
99 99 98

Sample Output:
9
12
198

What is boolean data type?
Boolean data type is a data type that can have only two values: true or false. In C, the boolean data type is represented by the keyword _bool_. The value of a boolean variable can be assigned using the keywords _true_ and _false_. The value of a boolean variable can be printed using the format specifier %d. The value of a boolean variable can be assigned using the keywords _true_ and _false_. The value of a boolean variable can be printed using the format specifier %d. 

### Question 3: Four players participate in the playoff tournament. The tournament is held according to the following scheme - The first player will play with the second player,  and the third player with the fourth, Then the winner of the pair will play in the final of the tournament.

It Is known that  in a match between two players  with the highest skills  meet in the finals.  Determine whether the given tournament is fair.

Output YES  if the tournament is fare,  or NO otherwise.

The skill of the  first,second,third and fourth player is between 1-100

Sample Input
3 7 9 5
4 5 6 9
5 3 8 1

Sample Output
YES
NO
YES 
