// Write a program to Display * in Horizontal and Vertical.
// How many *  How many * do you want to display Horizontal mast be enter through keyboard.
// Created by KUNTAL OJHA RAJ on 10/17/2020.
// Basic + Questions.
#include <stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter the number of * Do yoy want to Display Vertical:\n");
    scanf("%d",&i);
    printf("Enter the number of * Do yoy want to Display Horizontal:\n");
    scanf("%d",&j);
    for (k=1;k<=i-1;k++)
    {
        printf("*\n");
    }
    for (l=1;l<=j;l++)
    {
        printf("*");
    }
    return 0;
}
