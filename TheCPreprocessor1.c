// Use of #define . One more Example.
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// new use of #define. Example #define AREA(x) (3.14*x*x)
#include <stdio.h>
#define AREA(x) (3.14*x*x)
int main()
{
    float r1=6.25,r2=2.5,a;
    a=AREA(r1); // a=AREA(r1) would be replaced with a=(3.14*r1*r1)
    // Here x  is a and r1 is 6.25. so (r1)(3.14*r1*r1)
    printf("1.Area of circle=%f\n",a);
    a=AREA(r2); // a=AREA(r2) would be replaced with a=(3.14*r2*r2)
    //  Here x  is a and r2 is 6.25. so (r2)(3.14*r2*r2)
    printf("2.Area of circle=%f\n",a);
    return 0;
}
