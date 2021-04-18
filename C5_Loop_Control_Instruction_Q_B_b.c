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
    int i,j;
    unsigned long int a=1;
    printf("Enter a number (Less than 34):\n");
    scanf("%d",&j);
    if (j<34)
    {
        for (i=j;i>0;i--)
        {
            a=a*i;
        }
        printf("Factorial of %d is %lu",j,a);
    }
    else
    {
        printf("Enter number is <34 or equal to 34");
    }
    return 0;
}