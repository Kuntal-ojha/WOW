// Very simple example of function.
// Created by kuntal on 07-05-2021.
#include <stdio.h>
int AreaOfRect(int length, int breadth)
{
    int area;
    area = length*breadth;
    return area;
}
int main()
{
    int l=10,b=5;
    int area = AreaOfRect(l,b);
    printf("%d\n",area);
}

