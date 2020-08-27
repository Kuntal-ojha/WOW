
// One more Example of #define
// Created by KUNTAL OJHA RAJ on 8/6/2020.
//
#include<stdio.h>
#define PRO(x) x*x
int main()
{
    int i=3,j,k,l;
    j=PRO(i+1);
    k=PRO(i++);
    l=PRO(++i);
    printf("i=%d\nj=%d\nk=%d\nl=%d",i,j,k,l);
}
