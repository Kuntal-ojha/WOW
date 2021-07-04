// One more example of Function.
// Created by kuntal on 29-06-2021.
#include <stdio.h>
int function();
int main()
{
    printf("I am in Main function\n");
    printf("Function return the value %d\n",function());
    printf("After calling the function.\n");
}
int function()
{
    int n;
    printf("Enter any number:\n");
    scanf("%d",&n);
    if(n>=10 && n<=90)
        return n;
    else
        return (n+30);
}
