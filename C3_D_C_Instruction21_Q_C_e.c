// [C] Attempt the following Question (e)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// A five-digits number is entered through the keyboard. Write a program to obtain the reversed
//  number and to determine whether the original and reversed number are equal or not
#include <stdio.h>
int main()
{
    int a,b,c,c1,c2,c3,c4,d,e;
    printf("Enter a five-digits number:\n");
    scanf("%d",&a);
    e=a;
    b=a%10;
    a=a/10;
    c=b;
    c=c*10000;

    b=a%10;
    a=a/10;
    c1=b;
    c1=c1*1000;

    b=a%10;
    a=a/10;
    c2=b;
    c2=c2*100;

    b=a%10;
    a=a/10;
    c3=b;
    c3=c3*10;

    b=a%10;
    a=a/10;
    c4=b;
    c4=c4*1;
    d=c+c1+c2+c3+c4;
    printf("You Enter :%d\n",e);
    printf("Revers Number:%d\n\n",d);
    if(e==d)
        printf("Your Enter Number & Revers Number are Equal.\n");
    else
        printf("Your Enter Number & Revers Number are not Equal.\n");
    return 0;
}