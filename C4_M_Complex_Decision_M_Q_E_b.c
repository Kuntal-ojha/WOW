// [E] Attempt the following
// Write a program using conditional operators to
// determine whether  A year is entered through the keyboard is a leaper or not.
// Created by KUNTAL OJHA RAJ on 1/29/2021.
// Good Question
#include <stdio.h>
int main()
{
    int year;
    printf("\nEnter year:\n");
    scanf("%d",&year);
    year%100==0 ?(year%400==0 ?  printf("Leap Year") :
    printf("Not a Leap Year")):
    (year%4==0 ?printf("Leap year"):
    printf("Not a Leap Year"));
    return 0;
}

