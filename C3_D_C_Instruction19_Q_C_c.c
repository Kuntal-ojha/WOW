// [C] Attempt the following Question (c)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Any year input through the keyboard. Write a program to determine whether the
// year is leap year or not. (HINT: Use the % (Modulus ) operator.)
/*
 * Check whether the year is leap year or not
 * Year is leap if it is a century year and is divisible by 400
 * Year is leaper if it is a non-century year and is divisible by 4.
 */
#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year :\n");
    scanf("%d",&year);
    if (year%100==0)
    {
        if (year%400==0)
            printf("%d Is Leap year.",year);
        else
            printf("%d Is Not Leap year.",year);
    }
    else
    {
        if (year%4==0)
            printf("%d Is Leap year.",year);
        else
            printf("%d Is Not Leap year.",year);
    }
    return 0;
}

