// CP Program Link: https://www.hackerrank.com/challenges/arrays-ds/problem
// Created by kuntal on 24-05-2021.
#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int Array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&Array[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",Array[j]);
    }
}
