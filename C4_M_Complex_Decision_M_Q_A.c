// Question A
// Created by KUNTAL OJHA RAJ on 01/25/2021.
// If a=10,b=12,c=0, find the values of the expression in the following table
#include <stdio.h>
int main()
{
    int a=10,b=12,c=0,d,e,f,g,h;
    d=a!=6&&b>5;
    e=a==9||b<3;
    f=!(a>5&&c);
    g=!(a>5&&c);
    h=5&&c!=8||!c;
    printf("d=%d\ne=%d\nf=%d\ng=%d\nh=%d",d,e,f,g,h);
}