// Write a program to Display * in Vertical and Horizontal.
// How many * do you want to display Vertical and Horizontal mast be enter through keyboard.
// Created by KUNTAL OJHA RAJ on 10/17/2020.
// Basic + Questions.
#include <stdio.h>
int main()
{
    int i,j,k;
    printf("Enter how many * Do you want to Display in Vertical and Horizontal:\n");
    scanf("%d",&j);
    for (i=1;i<=j-1;i++) {
        printf("*");
    }
    for (k=1;k<=j;k++)
        printf("*\n");
}
