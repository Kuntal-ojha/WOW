// [C] Attempt the following Question (h)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Write a program to find the absolute value of a number entered through the keyboard.
// Absolute value is always positive.
#include <stdio.h>
int main()
{
    int number;
    printf("\nEnter any number:\n");
    scanf("%d",&number);
    if (number<0)
        number=number * -1;
    printf("The absolute value of this Number is %d\n",number);
    return 0;
}

