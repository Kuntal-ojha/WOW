// Pointer notation to access 2-D Array Elements
// Created by KUNTAL OJHA RAJ on 8/14/2020.
// s[2][1]
// *(s[2][1])
// *(s[2]+1)
// *(*(s+2)+1)
#include <stdio.h>
int main()
{
    int s[4][2]={
            {101,98},
            {102,96},
            {103,99},
            {104,100}
    };
    int i,j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=1;j++)
            printf(" %d",*(*(s+i)+j));
        printf("\n");
    }
    return 0;
}
