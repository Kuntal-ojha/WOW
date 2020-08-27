// Describe #define (n) ((n)*(n))
// Created by KUNTAL OJHA RAJ on 8/4/2020.
//
#include<stdio.h>
#define SQUARE(n) ((n)*(n))
int main()
{
    int j,x;
    // (n)=62/((n)*(n))
    // (n)=62/(16)
    // (n)=3.875
    // (n)=3 Because j is int.It's store integer value.
    j=62/SQUARE(4); // 3
    printf("j=%d",j);
    // OutPut is 3.
    return 0;
}