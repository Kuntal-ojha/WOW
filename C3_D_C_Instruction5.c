// Deference between = (Assignment operator) and == (Equal to Operator)
// Created by KUNTAL OJHA RAJ on 9/12/2020.
// Hare i show you deference between = And == Operator.
#include <stdio.h>
int main()
{
    int i;
    printf("Enter value of i\n");
    scanf("%d",&i);
    if (i=5) // Hear if Statement is true because i=5 is nonzero value and it is true condition.
        printf("You Entered 5\n");
    else
        printf("You Enter something other than 5\n");
    return 0;
}
