// 3-D Array
// Created by KUNTAL OJHA RAJ on 8/18/2020.
//
#include <stdio.h>
int main()
{
    int arr[3][4][2]={
            {
                    {2,4},
                    {7,8},
                    {3,4},
                    {5,6}
            },
            {
                    {7,8},
                    {3,4},
                    {5,3},
                    {2,3}
            },
            {
                    {8,9},
                    {7,2},
                    {3,4},
                    {5,1}
            }
    };
    int i,j,k;
    for(i=0;i<=2;i++) // This one for Print Time array.
    {
        for(j=0;j<=3;j++) // This one use for print Array Row.
        {
            for(k=0;k<=1;k++) // This one use for print Array Column.
                printf("%d",*(*(*(arr+i)+j)+k));
            printf("\n");
        }
        printf("\n");
    }
}
