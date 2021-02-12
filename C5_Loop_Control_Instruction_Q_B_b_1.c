// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (b)
/*
 * Write a Program to find the factorial value of any
 * number entered though the keyboard.
 */
#include <stdio.h>
int main()
{
    int number;
    unsigned long int factorial=1;
    // Factorial of 34 is beyond range of unsigned long int
    printf("Enter any number (Less than 34):\n");
    scanf("%d",number);
    for (int i = 1; i <=number ; i++)
    {
        factorial=factorial*i;
    }
    printf("Factorial of %d=%lu",number,factorial);
    return 0;
}