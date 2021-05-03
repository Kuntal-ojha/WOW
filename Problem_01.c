// Created by kuntal on 03-05-2021.
/**
Explanation:
For floating point numbers (float, double, long double) the values
cannot be predicted exactly. Depending on the number of bytes, the precession with
of the value represented varies. Float takes 4 bytes and long double takes 10 bytes.
So float stores 0.9 with less precision than long double.
Rule of Thumb:
Never compare or at-least be cautious when using floating point
numbers with relational operators (== , >, <, <=, >=,!= ) .
 */
#include <stdio.h>
int main()
{
    float me = 1.1;
    double you = 1.1;
    if(me==you)
        printf("I love U\n");
    else
        printf("I hate U\n");
    if(me>you)
        printf("I love U1\n");
    else
        printf("I hate U1\n");
    if(me<you)
        printf("I love U2\n");
    else
        printf("I hate U2\n");
}

