// My Won Method.
// Created by KUNTAL OJHA RAJ on 6/27/2020.
// The marks obtained by a student in five different subjects are input through the keyboard. The student ge division as per the following rules.
// Percentage above or Equal to 60 - First division.
// Percentage between 50 to 59 - Second division.
// Percentage between 40 to 49 - Third division.
// Percentage less than 40 - FAIL.
#include <stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,av,ac;
    printf("Enter the Sub marks:\n");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    av= s1+s2+s3+s4+s5*500/100;
    printf("%f",av);
    return 0;
}