// Swapping two Numbers
// Created by KUNTAL OJHA RAJ on 9/7/2020.
// Another way i use Swapping two Number With temp variable.
#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,temp;
    scanf("%d",&a,printf("Enter 2nd Number:\n"),scanf("%d",&b),printf("Enter 1st Number:\n"));
    printf("Before Swapping:\na=%d\nb=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping:\na=%d\nb=%d",a,b);
    getch();
}

