// Created by KUNTAL OJHA RAJ on 11/27/2020.
// Write a program to calculate the salary as per the following table:
/*
 * Gender       Years of Service        Qualification       Salary
 *
 * Male              >=10               Post-Graduate       15000
 * Male              >=10                  Graduate         10000
 * Male              <10                Post-Graduate       10000
 * Male              <10                   Graduate          7000
 * Female           >=10                Post-Graduate       12000
 * Female           >=10                   Graduate          9000
 * Female           <10                 Post-Graduate       10000
 * Female           <10                    Graduate          6000
 */
#include <stdio.h>
int main()
{
    int years,salary;
    char sex,qualification;
    printf("Enter sex (Male=M and Female=F):\n");
    scanf("%c",&sex);
    printf("Enter years of Service:\n");
    scanf("%d",years);
    printf("Enter Qualification (Post-Graduate=P and Graduate=G");
    scanf("%c",qualification);
    if (sex=='M' && years>=10 && qualification=='p')
}

