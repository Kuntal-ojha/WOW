// Example of auto int and int.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// Very Important Example of auto int and int .
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
    auto int i=1;
    int j=1;
    printf("Before Increment:\nJ=%d 1.i=%d\n",i,j);
    i=i+1;
    j=j+1;
    printf("After Increment:\nJ=%d i=%d\n",i,j);
}
