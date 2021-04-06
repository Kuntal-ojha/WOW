// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (h)
/*
 * Write a program to receive an integer and find its octal equivalent.
 * Hint: To obtain octal equivalent of an integer, divide it continuously
 * by 8 till dividend doesn't become zero, the write the
 * remainders obtained in reverse direction.
 */
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int integer,octal=0,rem,p=0,number;
    printf("Enter the number:\n");
    scanf("%d",&integer);
    number=integer;
    while (integer>0)
    {
        rem=integer%8;
        integer=integer/8;
        octal=octal+rem*pow(10,p);
        p++;
    }
    printf("The Octal equivalent of %d is %d",number,octal);
    getch();
}