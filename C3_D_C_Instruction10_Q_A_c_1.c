// Hare i more clear to if concept.
// Created by KUNTAL OJHA RAJ on 9/26/2020.
// Conceptual Question
#include <stdio.h>
int main()
{
    int x=10,y=20,z=20;
    if (x==y)
        printf("\nYes i know ! Hare X and Y are Equal & I am in First if Condition.\n");
    if (y==z)
        printf("\nYes i know ! Hare Y and Z are Equal & I am in Second if Condition.\n");
    if (x==y); // Hear the if condition don't work because of ; this.
        printf("\nYes i know ! Hare X and Y are Equal & I am in Third if Condition.\n");
    return 0;
}

