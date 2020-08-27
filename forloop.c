// for loops,
// Created by KUNTAL OJHA RAJ on 7/9/2020.
// Use many for loops.
#include <stdio.h>
int main ()
{
    int i=1;
    while (i<=10)
    {
        if (i==5)
            continue;
        printf("%d\n",i);
        i++;
    }
    printf("Kuntal");
}