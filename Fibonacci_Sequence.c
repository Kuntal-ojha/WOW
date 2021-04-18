// Write a program to print Fibonacci Sequence.
// Created by KUNTAL OJHA RAJ on 12/25/2020.
// Very Important Question.
#include <stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    printf("Enter the position of Fibonacci Sequence:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++){
        printf("Fibonacci Sequence is :%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
}

