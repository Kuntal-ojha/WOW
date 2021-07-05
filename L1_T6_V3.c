// Created by kuntal on 05-07-2021.
/*
 * Write a program to print: “As economic reforms picked up the pace,
 * India's GDP grew five-fold to reach US$2.2 trillion in 2015 (as per IMF estimates).”
 *
 * You need to define separate variables for ‘India’, ‘$’, ‘2.2’, and ‘2015’.
 * Use appropriate data types for each literal and accordingly
 * print the statement using corresponding format specifiers.
*/
#include <stdio.h>
int main()
{
    char Name[6]="India";
    char Dollar='$';
    float US=2.2;
    int year=2015;
    printf("As economic reforms picked up the pace,%s's GDP grew five-fold to reach US%c%.1f trillion in %d (as per IMF estimates)",Name,Dollar,US,year);
    return 0;
}