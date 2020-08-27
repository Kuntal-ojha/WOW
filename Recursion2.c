// More one example of recursion. This is the 3rd Example of recursion
// Created by KUNTAL OJHA RAJ on 7/31/2020.
// Hear i use recursion function.
// T(n)=7+(n-1)+n
#include<stdio.h>
int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }
    // T(4)=7+T(4-2)=7+T(2)
    // T(2)=7+T(2-2)=7+T(0)
    // T(2)=7+T(0)=7+1=8
    // T(4)=7+T(2)=7+8=15
}
int main()
{
    printf("%d",fun(4));
    return 0;
}
/*
 * who it works.
 * #include<stdio.h>
int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }
}
int main()
{
    printf("%d",fun(4));
    return 0;
}
 int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }
}
 int fun(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return 7+fun(n-2);
    }
}
 */
