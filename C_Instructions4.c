// This the Example of E(a)
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Very simple Question.
#include <stdio.h>
int main()
{
    int i=2,j=3,k,l;
    float a,b;
    k=i/j*j; // 2/3*3 -> 0*3 ->0
    l=j/i*i; // 3/2*2 -> 1*2 ->2
    a=i/j*j; // 2/3*3 -> 0*3 ->0.000000 (float)
    b=j/i*i; // 3/2*2 -> 1*2 ->2.000000 (float)
    printf("%d\n%d\n%f\n%f",k,l,a,b);
    return 0;
}
