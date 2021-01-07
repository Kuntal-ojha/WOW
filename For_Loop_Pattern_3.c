//
// Created by KUNTAL OJHA RAJ on 1/7/2021.
//
#include <stdio.h>
int main()
{
    int i,j,a,b;
    printf("Enter row:\n");
    scanf("%d",&a);
    printf("Enter column:\n");
    scanf("%d",&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

