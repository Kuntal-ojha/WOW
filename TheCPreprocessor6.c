// Describe #define f(x) (x)*x
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// Very Important Question.
#include <stdio.h>
#define f(x) (x)*x
int main()
{
    int p;
    // f(x)=64/(x)*x
    // f(x)=64/(2+3)*2+3
    // f(x)=64/5*2+3
    // int=int/int output only int & Store only int.
    // f(x)=12*2+3
    // f(x)=24+3
    // f(x)=27
    p=64/f(2+3);
    printf("%d",p);
    // So OutPut is 27
}
