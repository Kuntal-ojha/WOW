// Swiping two number with out using 3rd variable.
// Created by KUNTAL OJHA RAJ on 7/21/2020.
// Example of Swiping two number.
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter two number:\n");
    scanf("%d%d",&i,&j);
    printf("Before Swiping :\nA=%d\nB=%d\n",i,j);
    i=i+j;
    j=i-j;
    i=-i;
    printf("After swiping :\nA=%d\nB=%d\n",i,j);
}

