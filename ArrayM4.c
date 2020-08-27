// Matrix Addition
// Created by KUNTAL OJHA RAJ on 8/14/2020.
// Matrix A+B=C
#include <stdio.h>
int main()
{
    int a[4][3]={
            {1,2,3},
            {1,0,6},
            {7,8,3},
            {4,0,3}
    };
    int b[4][3]={
            {7,6,9},
            {11,2,8},
            {9,6,3},
            {4,10,12}
    };
    printf("Matrix A:\n");
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=2;j++)
            printf(" %d",*(*(a+i)+j));
        printf("\n");
    }
    printf("Matrix B:\n");
    int k,l;
    for(k=0;k<=3;k++)
    {
        for(l=0;l<=2;l++)
            printf(" %d",*(*(b+k)+l));
        printf("\n");
    }
    printf("Matrix c:\n");
    int m,n;
    for(m=0;m<=3;m++)
    {
        for(n=0;n<=2;n++)
            printf(" %d",*(*(a+m)+n)+*(*(b+m)+n));
        printf("\n");
    }
}
