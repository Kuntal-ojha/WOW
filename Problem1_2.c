// Find X?
// X^2-2^X
// Created by KUNTAL OJHA RAJ on 10/12/2020.
// Hear i Use pow() Function.
// pow(3,2)=9 And i Use #include <math.h>
// pow(a,b) = a^b
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int a,b=0,c,d;
    for (int i = 1; i > 0; ++i)
    {
        a=b*b;
        c=pow(2,b);
        d=a-c;
        if (d==1)
        {
            printf("Value of X=%d\n",b);
            break;
        }
        b=b+1;
    }
    getch();
}
