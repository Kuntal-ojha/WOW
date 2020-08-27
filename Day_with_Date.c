// Calculation the day on 1st january of any Year.
// Created by KUNTAL OJHA RAJ on 6/26/2020.
// Enter any date i will tell you the DAT of this date.
#include <stdio.h>
int main()
{
    int leapdays,first_day,yr;
    long int normal_days,total_days;
    printf("Enter year:\n");
    scanf("%d",&yr);
    normal_days=(yr-1)*365L;
    leapdays=(yr-1)/4-(yr-1)/100+(yr-1)/400;
    total_days=normal_days+leapdays;
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
