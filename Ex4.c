//
// Created by KUNTAL OJHA RAJ on 7/11/2020.
//
#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=2;i++)
    {
        for (int j = 1; j <=2; j++) {
            if (i==j)
                continue;
            printf("%d%d\n",i,j);
        }
        printf("%d%d\n\n",i,j);
    }
    return 0;
}

