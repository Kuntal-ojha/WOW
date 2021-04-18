// In this program we use a semicolon after if statement & let's see what happened.....!
// Created by KUNTAL OJHA RAJ on 9/12/2020.
// Hear what you enter no matter Allays out is "You enter 5"
// Because if statement work on Semicolon ; so no matter what you enter in input
// Because printf function not under the if statement That's why hear output is "You enter 5"
#include <stdio.h>
int main()
{
    int i;
    printf("Enter value of i\n");
    scanf("%d",&i);
    if (i==5);
        printf("You enter 5\n");

}
