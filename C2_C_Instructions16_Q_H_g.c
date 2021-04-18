// Question [H] (g)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// If value of an angle is input through the keyboard, Write a program
// to print all it's Trigonometric ratios.
// Print all Trigonometric ratios of an angle.
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float angle,Sin,Cos,Tan,pie=3.1416;
    printf("\nEnter an Angle:\n");
    scanf("%f",&angle);
    // Convert angle to radians
    angle=angle*pie/180;
    Sin=sin(angle);
    Cos=cos(angle);
    Tan=tan(angle);
    printf("Sin=%f\nCos=%f\nTan=%f",Sin,Cos,Tan);
    getch();
}
