// Function Example
// Created by kuntal on 29-06-2021.
// Passing variable between factions.
// Storing and receiving values between functions.
#include <stdio.h>
int cal_sum(int x,int y, int z);
int main()
{
    int a,b,c,sum;
    printf("Enter any three number:\n");
    scanf("%d %d %d",&a,&b,&c);
    sum= cal_sum(a,b,c);
    printf("Sum=%d",sum);
    return 0;
}
int cal_sum(int x, int y, int z)
{
    int d;
    d=x+y+z;
    return (d);
}
