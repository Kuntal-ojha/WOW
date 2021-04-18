// Simple question but very confusing ...
// Created by KUNTAL OJHA RAJ on 2/13/2021.
// I can't understand ...........
#include <stdio.h>
int main()
{
    char ch1,ch2;
    printf("Enter first character:\n");
    scanf(" %c",&ch1);
    /*
     *  The right one is scanf(" %c",&ch1);
     *  We must be use a space before %c like that
     *  scanf(" %c",&ch1);
     */

    printf("Enter second character:\n");
    scanf(" %c",&ch2);
    printf("First character is %c\nSecond Character is %c",ch1,ch2);
    return 0;
}
