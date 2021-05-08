//
// Created by kuntal on 05-05-2021.
//
#include <stdio.h>
int main()
{
    float x0 = 2,y0 = 3,x1 = 5,	y1 = 4,x2 = 7,	y2 = 8,x3 = 10,	y3 = 12,x4 = 12,y4 = 14,
    x=8,f=0;
   f= (x-x1)*(x-x2)*(x-x3)*(x-x4)/ (x0-x1)*( x0-x2)*( x0-x3)*( x0-x4)* y0
    + (x-x0)*(x-x2)*(x-x3)*(x-x4)/ (x1-x0)*( x1-x2)*( x1-x3)*( x1-x4)* y1
    + (x-x0)*(x-x1)*(x-x3)*(x-x4)/ (x2-x0)*( x2-x1)*( x2-x3)*( x2-x4)* y2
    +(x-x0)*(x-x1)*(x-x2)*(x-x4)/ (x3-x0)*( x3-x1)*( x3-x2)*( x3-x4)* y3
    +(x-x0)*(x-x1)*(x-x2)*(x-x3)/ (x4-x0)*( x4-x1)*( x4-x2)*( x4-x3)* y4;
    printf("%f",f);
}
