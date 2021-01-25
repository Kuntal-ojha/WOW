// Question [C]Point out the errors, if any, in the following program:
// Created by KUNTAL OJHA RAJ on 1/25/2021.
#include <stdio.h>
int main()
{
    int a=5,b=6;
    /*
       error expected ':' before ')' token
     (a==b?printf("%d\n",a));
     */
    (a==b?printf("%d\n",a));
    return 0;
}

