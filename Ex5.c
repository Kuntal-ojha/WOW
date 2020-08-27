//
// Created by KUNTAL OJHA RAJ on 7/11/2020.
//
#include <stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=2;i++)
    {
        for (j=1;j<=2;j++)
        {
            if (i==j)
                continue;
            printf("i1=%d j1=%d\n",i,j);
        }
        printf("i2=%d j2=%d\n",i,j);
    }
    printf("i3=%d j3=%d\n",i,j);
   return 0;
}
