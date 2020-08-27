// Example of static int .
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// one more example of static int.
#include<stdio.h>
void increment();
void increment1();
int main()
{
    increment();
    increment();
    increment();
}
void increment()
{
    static int i=1;
    i=i+1;
    printf("After Increment:%d\n",i);
}