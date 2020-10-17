// Write a program to Display * in Vertical and Horizontal.
// How many *  How many * do you want to display Horizontal mast be enter through keyboard.
// Created by KUNTAL OJHA RAJ on 10/17/2020.
// Basic + Questions.
#include <stdio.h>
int main()
{
    int i,j,k,l;
    printf("Enter the number of * Do yoy want to Display Horizontal:\n");
    scanf("%d",&j);
    printf("Enter the number of * Do yoy want to Display Vertical:\n");
    scanf("%d",&i);
    for (l=1;l<=j-1;l++)
    {
        printf("*");
    }
    for (k=1;k<=i;k++)
    {
        printf("*\n");
    }

    return 0;
}
