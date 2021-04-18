// [D] Attempt the following
// A year is entered through the keyboard,write a program to
// determine whether the year is leaper or not.
// Use the logical operators && and ||
// Created by KUNTAL OJHA RAJ on 1/29/2021.
// Good Question
#include <stdio.h>
int main()
{
    int year;
    perror("\nEnter year:\n");
    scanf("%d",&year);
    if (year%400==0 || year%100!=0 && year%4==0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}

