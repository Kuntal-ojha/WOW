// 4D array
// Created by KUNTAL OJHA RAJ on 8/20/2020
// Just Wow ..
#include <stdio.h>
int main()
{
    int arr[2][4][2][2]={
            {
                    {
                            {11,12},
                            {13,14}
                    },
                    {
                            {20,70},
                            {22,49}
                    },
                    {
                            {11,12},
                            {13,14}
                    },
                    {
                            {20,70},
                            {22,49}
                    },
            },
            {
                    {
                            {11,12},
                            {13,14}
                    },
                    {
                            {20,70},
                            {22,49}
                    },
                    {
                            {11,12},
                            {13,14}
                    },
                    {
                            {20,70},
                            {22,49}
                    },
            }
    };
    int i,j,k,l;
    for(i=0;i<=1;i++)
    {
        for (j=0;j<=3;j++)
        {
            for (k=0;k<=1;k++)
            {
                for ( l = 0; l<= 1 ; l++) {
                    printf(" %d",*(*(*(*(arr+i)+j)+k)+l));
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}