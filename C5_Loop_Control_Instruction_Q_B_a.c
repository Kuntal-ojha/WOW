// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.(mm/dd/yyyy)
// Now i start again doing it 08/05/2021 (dd/mm/yyyy)
// Question (a)
/*
 * Write a program to calculate overtime pay of 10 employees.
 * Overtime is paid at the rate of Rs.12.00 per hours for every
 * hours worked above 40 hours. Assume that employees
 * do not work for fractional part of an hour.
 */
#include <stdio.h>
int main()
{
    float overtime_pay;
    int hours,i=1;
    while (i<=10) {
        printf("\nNumber of employ %d\nEnter the number of hours worked:\n", i);
        scanf("%d", &hours);
        i++;
        if(hours>40)
        {
            overtime_pay=(hours-40)*12.00;
            printf("Numbers of hours worked=%d\nOvertime pay is: %f\n",hours,overtime_pay);
        } else
        {
            overtime_pay=0;
            printf("Numbers of hours worked=(%d) is less than 40 Hours\nSo overtime pay is: %f\n",hours,overtime_pay);
        }
    }
}