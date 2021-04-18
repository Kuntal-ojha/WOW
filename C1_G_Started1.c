// printf(<"format string">,<list of variables>);
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// %f for printing real value.
// %d for printing integer values.
// %c for printing character variable.
// Input through the keyboard.
#include <stdio.h>
int main()
{
    int p,n;
    float r,si;
    printf("Enter the value of p,n,r");
    scanf("%d%d%f",&p,&n,&r);
    si=p*n*r/100;
    printf("%f",si);
    return 0;
}

