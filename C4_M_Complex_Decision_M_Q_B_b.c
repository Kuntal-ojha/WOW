// Question B.b ( What will be the output of the following program.)
// Created by KUNTAL OJHA RAJ on 1/25/2021.
// Good Question
#include <stdio.h>
int main()
{
    int i=4,j=-1,k=0,w,x,y,z;
    w=i||j||k;
    x=i && j && k;
    y=i || j && k;
    z=i && j || k;
    printf("W=%d\nX=%d\nY=%d\nZ=%d",w,x,y,z);
    return 0;
}

