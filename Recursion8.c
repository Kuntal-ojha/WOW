// Display 5 to 1 using recursion.
// Created by KUNTAL OJHA RAJ on 8/1/2020.
// One more example in recursion.
#include <stdio.h>
int T(int n)
{
    printf("%d\n",n);
    if (n>1)
        T(n-1);
}
int main()
{
    T(5);
}
