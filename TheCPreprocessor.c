// Use of #define This is Example of Micro Expansion.
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// #define it's called micro Expansion
#include <stdio.h>
// Hear PL is called 'Micro Template' And 3.1428 it's Called 'Micro Expansion'.
#define PL 3.1428 // Here we CAN'T use semicolon(;). if you use semicolon (;) then this function can't work.
// The C program is known as 'Source Code'. Another program it's called preprocessor.
int main()
{
    float r=6.24;
    float area;
    area=PL*r*r;
    printf("Area of circle=%f ",area);
    return 0;
}