// Usage pointer to an Array.
// Created by KUNTAL OJHA RAJ on 8/14/2020.
// Hear i use a pointer in Array More Complex Example.
#include <stdio.h>
int main()
{
    int s[4][2]=
            {
            {101,98},
            {102,96},
            {103,99},
            {104,100}
            };
    int (*p)[2];
    int i,j,*pint;
    for(i=0;i<=3;i++)
    {
        p=&s[i];
        pint=(int*)p;
        printf("\n");
        for(j=0;j<=1;j++)
            printf("%d ",*(pint+j));
    }
    return 0;
}
