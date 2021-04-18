// Use of Nested if-else statement
// Created by KUNTAL OJHA RAJ on 9/12/2020.
// A quick demo of nested if-else
#include <stdio.h>
#include <conio.h>
int main()
{
    int i;
    printf("Enter either 1 or 2\n");
    scanf("%d",&i);
    if (i==1)
        printf("Hi Dear, I know You enter 1 !\n");
    else
    {
        if (i==2)
            printf("Hi Dear, I know You enter 2 !\n");
        else
            printf("Hi Naughty, You don't enter 1 or 2\n");
    }
    getch();
}

