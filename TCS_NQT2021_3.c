// Q3) What will happen when the following program is rum?
// Created by KUNTAL OJHA RAJ on 10/13/2020.
//
#include <stdio.h>
int main()
{
    int i=0;
    do
    {
        i++;
        printf("In Loop");
    }while (i<3);
}
/*
 * a) In Loop
 * b) In Loop In Loop
 * c) In Loop In Loop In Loop
 * d) INFINITE LOOP
 * e) NONE OF THIS ABOVE
 * f) ERROR
 * Answer: c) In Loop In Loop In Loop
 */
