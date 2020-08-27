// Function Example.
// Created by KUNTAL OJHA RAJ on 7/19/2020.
#include <stdio.h>
int f(int x,int y);
int main()
{
    int i,j,g;
    printf("Enter the value of f(X,Y)\n");
    scanf("%d%d",&i,&j);
    g=f(i,j)+6;
    printf("%d",g);
}
int f(int x,int y)
{
    int f;
    f=x+y;
    return (f);
}


