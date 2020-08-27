// Break statement.
// Created by KUNTAL OJHA RAJ on 7/9/2020.
// Use break statement.
#include <stdio.h>
int main ()
{
    int num,i;
    printf("Enter a number:\n");
    scanf("%d",&num);
    i=2;
    while (i<=num-1)
    {
        if (num%i==0)
        {
            printf("Not a Prime number.\n");
            break;
        }
        i++;
    }
    if (i==num)
        printf("Prime number\n");
    return 0;
}
