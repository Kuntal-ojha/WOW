// Simple Program.

// Created by KUNTAL OJHA RAJ on 11/21/2020.
// The marks obtained by a student in 5 different subjects are input through
// the keyboard The student gets a division as per the following rules:
/*
 * Percentage above or equal to 60 - First division.
 * Percentage between 50 and 59 - Second division.
 * Percentage between 40 and 49 - Third division.
 * Percentage less than 40 Fail.
 */
#include <stdio.h>
int main()
{


    int s,s1,s2,s3,s4,s5;
    printf("\nEnter marks in five subjects:\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    s=(s1+s2+s3+s4+s5)/5;
    printf("%d",s);
    if (s>=60)
        printf("First division\n");
    else if ((s>=50) && (s<=59))
        printf("Second division\n");
    else if ((s>=40) && (s<=49))
        printf("Third division\n");
    else
        printf("Fail\n");
    return 0;
}
