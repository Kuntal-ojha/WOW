// External Storage Class Example.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// Storage: Memory. Default value: Zero. Scope:Global.
#include <stdio.h>
int i;
void increment();
void decrement();
int main()
{
    printf("\ni=%d\n",i);
    increment();
    increment();
    decrement();
    decrement();
    return 0;
}
void increment()
{
    i=i+1;
    printf("on incrementing i=%d\n",i);
}
void decrement()
{
    i=i-1;
    printf("on decrementing i=%d\n",i);
}