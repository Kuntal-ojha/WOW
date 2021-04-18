// [C] Attempt the following Question (i)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Give the length and breadth of a rectangle, write a program to find whether the
// area of the rectangle is greater than its perimeter. For Example, the area of the
// rectangle with length =5 and breadth =4 is greater than its perimeter.
#include <stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    printf("Enter the length and breadth of the rectangle:\n");
    scanf("%f%f",&length,&breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    if (area>perimeter)
        printf("Area is greater than perimeter\n");
    else
        printf("Area is less than perimeter\n");
    return 0;
}

