// Question [C] Point out the errors, if any in the following program:
// Created by KUNTAL OJHA RAJ on 1/25/2021.
// Simple question
#include <stdio.h>
int main()
{
    int x=10,y=20;
    if (x>=2 and y<=50) // We can't use and like this.
        printf("%d\n",x);
    return 0;
}

