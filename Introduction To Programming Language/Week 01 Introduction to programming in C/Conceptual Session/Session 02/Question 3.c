// Question 3: Four players participate in the playoff tournament. The tournament is held according to the following scheme - the first player will play with the second, and the third player with the fourth, then the winners of the pairs will play in the finals of the tournament.

// It is known that in a match between two players, the one whose skill is greater will win.The tournament is called fair if the two players with the highest skills meet in the finals.Determine whether the given tournament is fair.


// Output YES if the tournament is fair, or NO otherwise.


// The skill of the first,second,third and fourth player is between 1-100.


// Note - All the players skills are distinct.


// >> Sample input -    

// 3 7 9 5

// 4 5 6 9

// 5 3 8 1

// 6 5 3 2


// >> Sample output -

// YES

// NO

// YES

// NO

//Date: 28/02/2023

#include<stdio.h>

int main()

{

    int player1,player2,player3,player4;

    scanf("%d%d%d%d",&player1,&player2,&player3,&player4);


    int winner1=-1,winner2=-1;

    if(player1>player2 && (player1>player3 || player1>player4))

        winner1=player1;

    else if(player2>player1 && (player2>player3 || player2>player4))

        winner1=player2;


    if(player3>player4 && (player3>player1 || player3>player2))

        winner2=player3;

    else if(player4>player3 && (player4>player1 || player4>player2))

        winner2=player4;


    if(winner1!=-1 && winner2!=-1)

        printf("YES\n");

    else

        printf("NO\n");

    return 0;

}
