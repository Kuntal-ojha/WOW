// One more Example of Multidimensional Array.
// Created by KUNTAL OJHA RAJ on 8/14/2020.
// Demo :2-DArray is an Array of Arrays.(Matrix)
#include <stdio.h>
int main()
{
    int s[4][2]={
            {101,98},
            {102,96},
            {103,99},
            {104,100}
    };
    int i;
    for ( i = 0; i <=3; ++i)
        printf("Address of %d th 1-D Array=%u\n",i,s[i]);
    return 0;
}
