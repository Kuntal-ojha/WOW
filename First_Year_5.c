// Write a program to Display * in Vertical. How many * do you want it mast be enter through keyboard.
// Created by KUNTAL OJHA RAJ on 10/17/2020.
// Basic + Questions.
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter how many * Do you want to Display in Vertical:\n");
    scanf("%d",&j);
    for (i=1;i<=j;i++) {
        printf("*");
    }
}
