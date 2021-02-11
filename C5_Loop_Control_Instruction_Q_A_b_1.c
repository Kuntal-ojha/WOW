// [A] What will be the output of the following programs:
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (b)
#include <stdio.h>
#include <conio.h>
int main()
{
    int x=4,y,z;
    y=--x; // y=G value then --4=3 so x=3 then y=3
    z=x--; // z=3 and x=3-- so x=2 and z=3
    printf("x=%d\ny=%d\nz=%d",x,y,z);
    getch();
}

