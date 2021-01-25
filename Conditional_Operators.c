// Conditional Operators.
// Created by KUNTAL OJHA RAJ on 1/16/2021.
// Use Ternary Operator ? and :
// a>b?c:d
#include <stdio.h>
#include <conio.h>
int main()
{
    int x,y;
    printf("Enter 1st Number:\n"); // 10
    scanf("%d",&x);
    printf("Enter 2nd Number:\n"); // 10
    scanf("%d",&y);
    x>y?printf("1st Number > 2nd Number"):printf("2nd Number > 1st Number");
    getch();
}

