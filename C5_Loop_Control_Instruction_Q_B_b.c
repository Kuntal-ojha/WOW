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
    int i,j,a=1;
    printf("Enter a number:\n");
    scanf("%d",&j);
    for (i=j ; i> 0 ; i++) {
        a=a*i;
    }
    printf("%d",a);
}