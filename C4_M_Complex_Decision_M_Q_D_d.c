// [D] Attempt the following
// If the three sides of a triangle are entered through the keyboard,
// write a program to check the triangle is isosceles,
// equilateral, scalene or right angled triangle.
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the 1st side of the triangle:\n");
    scanf("%d", &side1);
    printf("Enter the 2nd side of the triangle:\n");
    scanf("%d", &side2);
    printf("Enter the 3rd side of the triangle:\n");
    scanf("%d", &side3);
    if (side1==side2 && side1==side3)
        printf("The triangle is equilateral.\n");
    else if (side1==side2 || side1==side3 || side2==side3)
        printf("The triangle is Isosceles.\n");
    else
        printf("The triangle is scalene");
    return 0;
}

