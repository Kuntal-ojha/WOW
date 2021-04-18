// Exercise [F] (e)
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// The length and breadth of a rectangle and radius of a circle are input through the Keyboard.
// Write a program to calculate the area and perimeter of the rectangle,
// and the area and circumference of the circle.
/*
 * --------------------------FrameWork------------------------------
 * 1. Length and breadth of a rectangle are input through the keyboard.
 * 2. Radius of a circle input through the keyboard.
 * 3. Calculate the area and perimeter of the recharge.
 * 4. Calculate the area and circumference of the circle.
 */
#include <stdio.h>
int main()
{
    int l,b,r,area1,perimeter;
    float area2,circle,pi=3.1416;
    printf("\nEnter Length & Breadth of Rectangle:\n");
    scanf("%d%d",&l,&b);

    area1=l*b; // Ares of Rectangle
    perimeter=2*l*b; // Perimeter of a rectangle
    printf("Area of Rectangle:\n%d\n",area1);

    printf("Perimeter of Rectangle:\n%d\n",perimeter);

    printf("\nEnter Radius of Circle:\n");
    scanf("%d",&r);
    area2=pi*r*r; // Area of Circle
    circle=2*pi*r; // Circumference of a circle.
    printf("Area of Circle:\n%f\n",area2);
    printf("Circumference of circle:\n%f",circle);
    return 0;
}

