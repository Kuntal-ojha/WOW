// Question [H] (a)
// If a Five-digit number is input through the keyboard,write a program to Calculate the Sum of its digits.
// (Hint: Use the modulus operator '%'
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Sum of Digits of a 5 digits Numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int r,n,sum=0,i=5;
    printf("Enter a 5 Digits Number:\n");
    scanf("%d",&n);
    while (i>=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        i--;
    }
    printf("The sum of the 5 digits is:%d",sum);
    getch();
}

