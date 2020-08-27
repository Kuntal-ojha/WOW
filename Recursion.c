// A simple program.
// Created by KUNTAL OJHA RAJ on 7/29/2020.
// This is a non recursive Function Example.
#include<stdio.h>
int factorial (int );
int main()
{
    int a,fact;
    printf("Enter any Number:\n");
    scanf("%d",&a);
    fact=factorial(a);
    printf("Factorial Value=%d\n",fact);
    return 0;
}
int factorial (int x)
{
    int f=1,i;
    for (int i = x; i >=1 ; i--)
        f=f*i;
        return (f);

}




