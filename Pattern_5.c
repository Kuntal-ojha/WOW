// Created by kuntal on 23-05-2021.
/**
            *
          * *
        * * *
      * * * *
    * * * * *

 */
#include <stdio.h>
int main()
{
    int i,j,k,m=6;
    for ( i = 0; i <6 ; i++)
    {
        for ( k = 0; k<m; k++)
        {
            printf(" ");
        }
        m--;
        for ( j = i; j > 0; j--)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
