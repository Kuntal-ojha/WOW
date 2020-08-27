// Pointer called by reference.
// Created by KUNTAL OJHA RAJ on 7/25/2020.
// Mor pointer Example This one is Example number 5.
#include<stdio.h>
void swap(int *,int *);
int main()
{
   int a=10,b=20;
   swap(&a,&b);
   printf("a=%d b=%d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
