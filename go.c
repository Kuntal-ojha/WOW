//
// Created by KUNTAL OJHA RAJ on 7/2/2020.
//
#include <stdio.h>
int main ()
{
    int i=1;
    while (i<=10)
    {
        if (i==5)
            break;
        printf("%d\n",i);
        i++;
    }
    printf("This is the power of break; statement.");
}
