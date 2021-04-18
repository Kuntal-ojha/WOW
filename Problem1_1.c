// Find X?
// X^2-2^X
// Created by KUNTAL OJHA RAJ on 10/11/2020.
// Hear i Use pow() Function.
// pow(3,2)=9 And i Use #include <math.h>
// pow(a,b) = a^b
#include <stdio.h>
#include<math.h>
int main( )
{
    int x=0;
    while((pow(x,2) - pow(2,x))!=1)
    {
        x++;
    }
    printf ("Value of X=%d",x);
}