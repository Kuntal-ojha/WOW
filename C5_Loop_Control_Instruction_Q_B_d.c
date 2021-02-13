// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (d)
/*
 * Write a program to print all the ASCII values and their equivalent
 * characters using a while loop. the ASCII values vary form 0 to 255
 */
#include <stdio.h>
int main()
{
    int i=0;
    while (i<=255)
    {
        printf("ASCII Value is %d and the Character is %c\n",i,i);
        i++;
    }
    return 0;
}