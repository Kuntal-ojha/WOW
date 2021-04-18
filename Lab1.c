// Q).Lab3 Dynamic Programming.
// Find the minimum number of scalar multiplication needed for chain of matrix.
// Created by KUNTAL OJHA RAJ on 10/15/2020.
//
#include <stdio.h>
int MatOrder (int array [], int n)
{
    int null[n][n];
    for(int i=1;i<n;i++)
        null[i][i]=0;
    for (int length=2;length<n;length++)
    {
        for(int i=1;i<n-length+1;i++)
        {
            {
                int j=i+length-1;
                int MAX;
                null[i][j]= INT - MAX;
                for (int k=1;k=j-1;k++)
                {
                    int q=null[i][j]+null[k+1][j]+array[i-1]*array[k]*array[j];
                    if (q<null[i][j])
                        null[i][j]=q;
                }
            }
        }

    }
    return null[1][n-1];
}
int main;()

    int arr []= {1,2,3,4};
            int MatOrder (int array [], int n);
    printf("%d",MatOrder(arr,size));
    return 0;
}