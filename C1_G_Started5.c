// Exercise [F] (a)
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of Basic Salary,
// and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
/*
   --------------------------FrameWork------------------------------
 * 1. Ramesh's basic salary is input through the keyboard.
 * 2. His Dearness allowance & house rent allowance are 40% & 20% of Basic Salary.
 * 3. His Gross salary is dearness and house rent salary.
 */
#include <stdio.h>
int main()
{
    float bs,de,ho,gross;
    printf("Enter Basic Salary of Ramesh:\n");
    scanf("%f",&bs);
    de=0.4*bs;
    ho=0.2*bs;
    gross=bs+de+ho;
    printf("Basic Salary of Ramesh=%f\n",bs);
    printf("Dearness Allowance=%f\n",de);
    printf("House Rent Allowance=%f\n",ho);
    printf("Gross salary Salary of Mr. Ramesh:%f",gross);
    return 0;
}

