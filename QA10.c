// Swap Two Numbers
// Created by KUNTAL OJHA RAJ on 9/5/2020.
// Swap Two Numbers Using 3rd Variable.
#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 1st & 2nd Number:\n");
    scanf("%d%d",&a,&b);
    printf("\nBefore Swapping..\na=%d\nb=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter Swapping..\na=%d\nb=%d",a,b);
    return 0;
}

