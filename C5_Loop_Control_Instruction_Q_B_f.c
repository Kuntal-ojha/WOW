// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.(mm/dd/yyyy)
// Now i start again 09/05/2021 (dd/mm/yyyy)
// Question (f)
/*
 * Write a program for a matchstick game being played between the computer
 * and user. Your program should ensure that the computer always wins.
 * Rules for the game are as follows:
 * 1. There are 21 matchsticks.
 * 2. The computer asks the player to pick 1,2,3 or 4 matchsticks.
 * 3. After the person picks, the computer does its picking.
 * 4. Whoever is forced to pick up the last matchstick loses the game.
 */
#include <stdio.h>
int main()
{
    int m=21,p,c;
    while (1)
    {
        printf("\n\nNo of match left=%d\n",m);
        printf("Pick up 1,2,3,or 4 Matches:\n");
        scanf("%d",&p);
        if(p>4 || p<1)
            continue;
        m=m-p;
        printf("No. of matches left=%d\n",m);
        c=5-p;
        printf("Out of which computer picked up %d\n",c);
        m=m-c;
        if(m==1)
        {
            printf("Number of matches left %d\n\n",m);
            printf("You lost the game !!\n");
            break;
        }
    }
    return 0;
}
