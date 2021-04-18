// Question B.d ( What will be the output of the following program.)
// Created by KUNTAL OJHA RAJ on 1/25/2021.
// Good Question
#include <stdio.h>
int main()
{
    int i=-4,j,num=0;
    j=(num<0?0:num*num); // Here num isn't initialised.
    printf("J=%d\n",j);
    return 0;
}

