// In this program we use a semicolon after if statement & let's see what happened.....!
// Created by KUNTAL OJHA RAJ on 9/12/2020.
// Hear what you enter no matter Allays out is "You enter 5"
// Because if statement work on Semicolon ; so no matter what you enter in input
// Because printf function not under the if statement That's why hear output is "You enter 5"
// Remember one things hare You can't use else statement.
// Very conceptual question.
#include <stdio.h>
int main()
{
    int j;
    printf("Enter value of j\n");
    scanf("%d",&j);
    if (j==5)
        ;
    printf("You enter 5\n");
    return 0;
}

