// Question [H] (c)
// If length of Three side of a triangle are input through the keyboard,
// write a program to find the area of the Triangle.
// Created by KUNTAL OJHA RAJ on 9/8/2020.
#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,sp,area;
    printf(" Remember(A+B>C),(A+C>B),(B+C>A)\n Enter sides of Triangle:\n");
    scanf("%f%f%f",&a,&b,&c);
    sp=(a+b+c)/2;
    area=sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    printf("Area of Triangle:\n%f",area);
    return 0;
}

