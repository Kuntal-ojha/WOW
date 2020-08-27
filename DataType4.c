// Static Storage Class.
// Created by KUNTAL OJHA RAJ on 8/2/2020.
// It's use Memory storage & Default value is (Zero) 0.
#include <stdio.h>
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
    auto int i=1; // When we use auto int & int i=i+1; 2 this function work 1 time
    static int j=1; // static int variable j=j+1; first 2, second 3, and third time its shows 4
    // because when it call again this function work again ane again
    i=i+1; // This one work first time .Next time it's can't work again .
    j=j+1; // It's increment every call function.
    // So now we know the different between auto int/int or static int .
    printf("i=%d j=%d\n",i,j);
}