// Function Math Example.
// Created by KUNTAL OJHA RAJ on 7/23/2020.
// Using Function Solve by Me.
#include <stdio.h>
int f();
int main()
{

    int p=f()+3;
    printf("Q.\nf(x)=x+2,g(x)=f(x)+3\n");
    printf("Answer:\ng(x)=f(x)+3=%d",p);
}
int f(int a)
{
    //int a;
    int i;
    printf("Enter the value of g(x)\n");
    scanf("%d",&i);
    a=i+2;
    return a;
}
