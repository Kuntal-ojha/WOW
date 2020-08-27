// Factorial n=n!
// Created by KUNTAL OJHA RAJ on 8/1/2020.
// More Recursion example and find factorial n=n!.
#include <stdio.h>
int T(int );
int main()
{
    printf("%d",T(4));
}
int T(int n)
{
    if (n==1)
        return (1);
    else
    {
        return (T(n-1)*n);
    }
}
/* Another way
#include<stdio.h>
int T(int n)
{
    if (n==1)
        return (1);
    else
    {
        return (T(n-1)*n);
    }
}
int main()
{
    printf("%d",T(4));
}
*/