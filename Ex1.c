//
// Created by KUNTAL OJHA RAJ on 7/9/2020.
//
#include <stdio.h>
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if (i==5)
            continue;
        printf("%d\n",i);
    }
}
