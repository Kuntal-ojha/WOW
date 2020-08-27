// Display 0 to 4
// Created by KUNTAL OJHA RAJ on 8/1/2020.
// Hear i use recursive.
#include <stdio.h>
int T(int );
int main()
{
    T(4);
}
int T(int n)
{
    if (n>0)
        T(n-1);
    printf("%d\n",n);
}
