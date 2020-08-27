// Example of Register Storage Class.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// Hear i use register class for store a value.
#include<stdio.h>
int main()
{
    register float i;
    for (i=0.123456;i<=10.5;i++)
        printf("%f\n",i);
    return 0;
}
