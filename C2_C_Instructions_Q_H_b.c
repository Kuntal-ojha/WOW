// Question [H] (b)
// If a Five-digit number is input through the keyboard,write a program to Revers the Number.
// (Hint: Use the modulus operator '%'
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Reverse digits of a 5 digits Numbers
#include <stdio.h>
#include <conio.h>
int main()
{
    int r,n,i=10000,sum=0;
    printf("Enter a 5 Digits Number:\n");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+i*r;
        i=i/10;
    }
    printf("The Reverse Numbers is:\n%d",sum);
    getch();
}


