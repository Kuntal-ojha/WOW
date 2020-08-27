//
// Created by KUNTAL OJHA RAJ on 8/17/2020.
//
#include <stdio.h>
int main()
{
    int i,j,k;
    for (i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
            {
                if (i==2&&j==2&&k==2) // if(i==j==k) not Equal.
                    goto out;
                else
                    printf("%d%d%d\n",i,j,k);
            }
        }
    }
    out:
    printf("Out of The loop at last\n");
}
