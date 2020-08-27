// Use of static int.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// One more Example of static int.
#include<stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    static int i=1;
    printf("Before Increment:%d\n",i);
    i=i+1;
}

