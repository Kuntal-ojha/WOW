// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021. (mm/dd/yyyy)
// Today i start again 08/05/2021 (dd/mm/yyyy)
// Question (c)
/*
 * Two numbers are entered through the keyboard. Write a program to find
 * the value of one number raised to the power of another.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,i=1;
    long int power=1;
    printf("\nEnter two numbers:\n");
    scanf("%d %d",&x,&y);
    power= pow(x,y);
    printf("%d to the power %d is %ld",x,y,power);
    return 0;
}