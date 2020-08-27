// Recursion Example Very Heard ☻
// Created by KUNTAL OJHA RAJ on 7/29/2020.
//
#include<stdio.h>
int rec(int);
int main()
{
    int a,fact;
    printf("Enter any number:\n");
    scanf("%d",&a);
    fact=rec(a);
    printf("Factorial value=%d\n",fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x==1)
        return (1);
    else
        f=x*rec(x-1);
    return (f);
}
