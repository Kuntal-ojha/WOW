//
// Created by kuntal on 24-05-2021.
//
#include <stdio.h>
int main()
{
    int i,j,k;
    for ( i = 5; i > 0 ; i--)
    {
        for ( j = i; j > 0; j--)
        {
            printf(" ");
        }
        for ( k = i; k > 0; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
