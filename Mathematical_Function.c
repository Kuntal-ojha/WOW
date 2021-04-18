//
// Created by KUNTAL OJHA RAJ on 11/2/2020.
//
#include <stdio.h>
#include <math.h>
int main()
{
    double  i,j;
    printf("Enter a Number:\n");
    scanf("%lf",&i);
    j=i;
    i=sqrt(i);
    printf("Square Root of %.2lf is %.2lf",j,i);
    return 0;
}
