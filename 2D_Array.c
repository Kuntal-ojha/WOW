// Here i am write a 2D Array.
// Created by KUNTAL OJHA RAJ on 12/26/2020.
// Very Important Program
#include <stdio.h>
int main()
{
    int TwoDArray[4][5];
    int i,j,k=0;
    for (i=0;i<4;i++)
        for (j=0;j<5;j++)
        {
            TwoDArray[i][j]=k;
            k++;
        }
    for (i=0;i<4;i++){
        for (j=0;j<5;j++)
           printf("%d ",TwoDArray[i][j]);
           printf("\n");
    }
}

