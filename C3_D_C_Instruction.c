// While purchasing certain items, a discount of 10% is offered if the purchased is more than 1000
// If quantity and price per item are input through the keyboard, Write a program to calculate the total expenses.
// Created by KUNTAL OJHA RAJ on 9/12/2020.
// A Very Simple program
#include <stdio.h>
int main()
{
    int qty,dis;
    float rate,tot;
    printf("Enter quantity and rate:\n");
    scanf("%d%f",&qty,&rate);
    if (qty>1000)
        dis=10;
    else
        dis=0;
    tot=(qty*rate)-(qty*rate*dis/100);
    printf("Total expenses=Rs.%f\n",tot);
    return 0;
}

