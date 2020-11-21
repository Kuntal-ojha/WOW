// [C] Attempt the following Question (l)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Give a point (x,y), write a program to find out if it lies on
// the x-axis or the origin.
#include <stdio.h>
int main()
{
    int x,y;
    printf("\nEnter the x and y coordinates of a point:\n");
    scanf("%d%d",&x,&y);
    if (x==0 & y==0)
        printf("Point lies on Origin.\n");
    else if (x!=0 && y==0)
        printf("Point line on X axis\n");
    else
        printf("Point neither line on any axis, nor Origin\n");
    return 0;
}

