// This A simple Division Example.
// Created by KUNTAL OJHA RAJ on 9/2/2020.
// Hear two numbers Division  in MORE creative way.
#include <stdio.h>
#include <conio.h>
int main()
{
    float a,b;
    scanf("%f",&a,printf("Enter 1st Number:\n"));
    scanf("%f",&b,printf("Enter 2nd Number:\n"));
    /*
     * Hear i use %.2f Because i want to print two number after point(.)
     * so i use %2.f  Ans will be (.00)
     * if i need to 3 number after point(.) Ans will be (.000)
     * */
    printf("Division is:\n%.2f",a/b);
    getch();
}
