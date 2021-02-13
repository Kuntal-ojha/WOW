// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (b)
/*
 * Write a Program to find the factorial value of any
 * number entered though the keyboard.
 */
// I want to use do while but i can't right now . i will do it later.
#include <stdio.h>
int main()
{
    int number;
    unsigned long int factorial=1;
    char ans;
    // Factorial of 34 is beyond range of unsigned long int
    do {
        printf("Enter any number (Less than 34):\n");
        scanf("%d",&number);
        if (number<34)
        {
            for (int i=number;i>0;i--)
            {
                factorial=factorial*i;
            }
            printf("Factorial of %d=%lu\n",number,factorial);
        } else
        {
            printf("Enter number is <34 or equal to 34");
        }
        printf("Do you want to run it again Then enter 1:\n");
        scanf("%d",&ans);
    } while (ans==1);

    return 0;
}