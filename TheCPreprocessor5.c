// Describe #define f(x) x*(x)
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// Very Important Question.
#include <stdio.h>
#define f(x) x*(x)
int main()
{
    int p;
    // f(x)=x*(x)
    // f(x)=2+3*(2+3)
    // f(x)=2+3*5
    // f(x)=2+15
    // f(x)=17
    p=f(2+3);
    printf("%d",p);
    // So OutPut is 17.
}
