// [E] Attempt the following
// Write a program to receive value of an angle in degrees and check whether
// sum of sequence of since and cosine of this angle is equal 1.
// Created by KUNTAL OJHA RAJ on 1/29/2021.
//
#include <stdio.h>
#include <conio.h>
// Determine whether sum of sequence of sine and cosine of an angle is equal to 1
int main()
{
    int n1,n2,n3,angle;
    printf("\nEnter a angle in degrees:\n");
    scanf("%d",&angle);
    angle=angle*3.14/180;
    sum=pow(sin(angle),2)+pow((cos(angle),2));
    if (sum==1)
    {
        printf("Sum of squares of sine and cosine is equal to 1.");
    } else
    {
        printf("Sum of squares of sine and cosine is not equal to 1");
    }
    return 0;
}
