// Pointers Example
// Created by KUNTAL OJHA RAJ on 7/26/2020.
// Very Important Example in Pointer.
#include <stdio.h>
void fun(int ,int );
int main()
{
    int i=5,j=2;
    fun(i,j);
    printf("%d%d\n",i,j);
    return 0;
}
void fun(int i,int j)
{
   i=i*i;
   j=j*j;
}
