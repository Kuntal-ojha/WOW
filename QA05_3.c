// Make A simple Calculator (Addition,Subtraction,Multiplication,Division)
// Created by KUNTAL OJHA RAJ on 9/2/2020.
// Very Creative Way.
#include <stdio.h>
#include <conio.h>
int main()
{
    float a,b;
    scanf("%f",&a,printf("Enter 1st Number:\n"));
    scanf("%f",&b,printf("Enter 2nd Number:\n"));
    printf("Addition (%.2f)+(%.2f) is:\n%.2f",a,b,a+b);
    printf("\nSubtraction (%.2f)-(%.2f) is:\n%.2f",a,b,a-b);
    printf("\nMultiplication (%.2f)*(%.2f) is:\n%.2f",a,b,a*b);
    printf("\nDivision (%.2f)/(%.2f) is:\n%.2f",a,b,a/b);
    getch();
}

