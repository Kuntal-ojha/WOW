// Write a program to find number is prime or not
// Created by KUNTAL OJHA RAJ on 12/25/2020.
// Simple  but important question.
#include<stdio.h>
int main()
{
    int num,flag,true;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            flag =1;
            break;
        }
    }

    if (!flag)
        printf(" is a prime number.");
    else
        printf(" is not a prime number.");

}

