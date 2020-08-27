// Describe (n)=(n)*(n)
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// Good Question.
#include<stdio.h>
#define SQUARE(n) (n)*(n)
int main()
{
    int j;
    // (n)=62/(n)*(n)
    // (n)=62/(4)*(4)
    // (n)=15*4
    // (n)=60
    j=62/SQUARE(4); // 60
    printf("j=%d",j);
    // So OutPut is 60
    return 0;
}