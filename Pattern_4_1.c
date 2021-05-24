// Created by kuntal on 23-05-2021.
/**
    * * * * *
    0 * * * *
    0 0 * * *
    0 0 0 * *
    0 0 0 0 *

 */
#include <stdio.h>
int main()
{
    int i,j,k,m=5;
    for ( i = 0; i <5 ; i++)
    {
        for ( j = i; j > 0; j--)
        {
            printf("0 ");
        }
        for ( k = 0; k<m; k++)
        {
            printf("* ");
        }
        m--;
        printf("\n");
    }
    return 0;
}
