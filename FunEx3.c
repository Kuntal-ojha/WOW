// Chapter 8 (Function )
// Created by KUNTAL OJHA RAJ on 7/23/2020.
// Calculate function value of an integer using a function.
//Q.(a) Write a function to calculate the factorial value of any integer entered through the Keyboard.
#include <stdio.h>
long fact(int );
int main()
{
    int num;
    long factorial;
    printf("\nEnter a number:Up to 12\n");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial of %d=%ld\n",num,factorial);
    return 0;
}
long fact(int num)
{
    int i;
    long factorial=1;
    for (i=1;i<=num;i++)
        factorial=factorial*i;
    return (factorial);
}
