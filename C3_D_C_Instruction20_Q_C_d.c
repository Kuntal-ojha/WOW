// [C] Attempt the following Question (d)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// According to Gregorian calender, it was Monday on the date 01/01/01.
// If any year is input through the keyboard write a program to find out
// what is the day on 1st January of this year.
#include <stdio.h>
int main()
{
    int leap_years,first_day,year;
    long int normal_day,total_days;
    printf("Enter Years:\n");
    scanf("%d",&year);
    normal_day=(year-1)*365l;
    leap_years=(year-1)/4-(year-1)/100+(year-1)/400;
    total_days=normal_day+leap_years;
    first_day=total_days%7;
    if (first_day==0)
        printf("Monday\n");
    if (first_day==1)
        printf("Tuesday\n");
    if (first_day==2)
        printf("Wednesday\n");
    if (first_day==3)
        printf("Thursday\n");
    if (first_day==4)
        printf("Friday\n");
    if (first_day==5)
        printf("Saturday\n");
    if (first_day==6)
        printf("Sunday\n");
    return 0;
}