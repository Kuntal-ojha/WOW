// Write a program to find the number is palindrome or not.
// Created by KUNTAL OJHA RAJ on 12/25/2020.
// Very important question.
#include<stdio.h>
int main()
{
    int n, r=0,rem, original;
    printf("Enter Numbers i will tell you palindrome or not:\n");
    scanf("%d",&n);
    original=n;
    while (n!=0)
    {
        rem=n%10;
        r=r*10+rem;
        n=n/10;
    }
    if (original==r)
    {
        printf("Number is palindrome");
    }
    else {
        printf("Number is not palindrome");
    }
}
