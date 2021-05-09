// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/15/2021.(mm/dd/yyyy)
// Now i start again 09/05/2021 (dd/mm/yyyy)
// Question (e)
// Very Important Question.
/*
 * Write a program to print out all the Armstrong number between
 * 1 to 500. If sum of cubes of each digits of number is equal
 * to the number itself, then the number is called an Armstrong
 * number. For Example 153=(1*1*1)+(5*5*5)+(3*3*3).
 */
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Armstrong number between 1 to 500 are:\n");
    for (int i = 1; i <=500 ; i++)
    {
        a=i%10; // Extract last digit
        b=i%100;
        b=(b-a)/10; // Extract second digit
        c=i/100; // Extract first digit
        if ((a*a*a)+(b*b*b)+(c*c*c)==i)
            printf(" Armstrong number is: %d\n",i); // For print Armstrong number.
    }
    return 0;
}