// Find X?
// X^2-2^X
// Created by KUNTAL OJHA RAJ on 10/11/2020.
// Hear i Use pow() Function.
// pow(3,2)=9 And i Use #include <math.h>
// pow(a,b) = a^b
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b=0,c=0;
    for (int i = 1; i > 0; ++i)
    {
        a=b*b;
        c=pow(2,b);
        printf("My Name is KUNTAL OJHA %d\n",a);
        printf("My Name is KUNTAL  %d\n\n",c);
        b=b+1;
    }
}
