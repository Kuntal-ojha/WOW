// Swiping two number using 3rd variable.
// Created by KUNTAL OJHA RAJ on 7/21/2020.
// Swiping Example.
#include <stdio.h>
int main()
{
    int i,j,k;
    printf("Enter two number:\n");
    scanf("%d%d",&i,&j);
    printf("Before Swiping :\nA=%d\nB=%d\n",i,j);
    k=i;
    i=j;
    j=k;
    printf("After swiping :\nA=%d\nB=%d\n",i,j);
}
