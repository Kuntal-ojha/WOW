// Question [H] (d)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// Write a Program to receive Cartesian co-ordinates (X,Y) of a point
// And convert them into polar Co-Ordinates (r,Psi)
// Hear i Use a New Function sqrt()
// sqrt() It's Means Square Rout And cbrt() It's Means Cube Rout
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    // This Program is Convert Cartesian Co-ordinates to Polar Co-ordinates
    float x,y,r,theta;
    printf("Enter x And y co-ordinates:\n");
    scanf("%f%f",&x,&y);
    r=sqrt(x*x+y*y);
    theta=atan2(y,x);
    theta=theta*180/3.14; // Convert to Degree
    printf("r=%f\nTheta=%f",r,theta);
    getch();
}

