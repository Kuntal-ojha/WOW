// Example From Google.
// Created by KUNTAL OJHA RAJ on 7/21/2020.
// Fined Max value.
#include<stdio.h>
// Function declaration
int max (int  num1,int num2,int num3);
// function returning the max between two numbers.
int max (int  num1,int num2,int num3)
{
    // Local variable declaration.
    int result;
    if (num1>num2 && num1>num3)
        result=num1;
    else if (num2>num1 && num2>num3)
        result=num2;
    else
        result=num3;
    return result;
}
int main()
{
    // Local variable definition.
    int a,b,c,ret;
    printf("Enter two number (integer):\n");
    scanf("%d%d%d",&a,&b,&c);
    // Calling a function to get max value.
    ret = max(a,b,c);
    printf("Max value is:%d\n",ret);
    return 0;
}