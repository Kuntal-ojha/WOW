// Use of long And Unsigned
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// where we can't use float and double.
#include <stdio.h>
int main()
{
    // Hear we can use only long or only float or long int
    long float a=(int ) 25.345e454;// we cant not use long and float both in same time .
    // Hear we can use unsigned or double or unsigned int but we can't use both at a same time .
    unsigned double  b= 25; // hear we can not use unsigned and double at a same time of one variable .
    printf("a=%fl\n%u\n",a,b);
}
