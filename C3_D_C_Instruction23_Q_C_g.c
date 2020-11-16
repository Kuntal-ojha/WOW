// [C] Attempt the following Question (g)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Write a program to check whether a triangle is valid or not, when the
// three angles of the triangle are entered through the keyboard. A triangle
// is valid if the sum of all the three angles is equal to 180 degree.
#include <stdio.h>
int main()
{
    int angle1,angle2,angle3;
    printf("\nEnter three angle of the triangle:\n");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    if ((angle1+angle2+angle3)==180)
        printf("The Triangle is a valid triangle\n");
    else
        printf("The Triangle is a invalid triangle\n");
    return 0;
}
