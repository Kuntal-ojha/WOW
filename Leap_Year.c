// Check whether the year is Leap or not.
// Year is leap if it is a century year and is divisible by 400.
// Year is leap if it is a non-century year and is divisible by 4.
// Created by KUNTAL OJHA RAJ on 6/24/2020.
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year\n");
    scanf("%d",&yr);
    if (yr%100==0)
    {
        if (yr%400==0)
            printf("Leap year.\n");
        else
            printf("Not a Leap year.\n");
    }
    else
    {
        if (yr%4==0)
            printf("Leap year.\n");
        else
            printf("Not a Leap year.\n");
    }
    return 0;
}
