// Multidimensional Array.
// Created by KUNTAL OJHA RAJ on 8/14/2020.
// 2-D Array Memory Maps
#include <stdio.h>
int main()
{
    int s[4][2]={
            {101,98},
            {102,96},
            {103,99},
            {104,100}
    };
    printf("Rolls: %d Address: %u\n",s[0][0],&s[0][0]);
    printf("Marks: %d  Address: %u\n",s[0][1],&s[0][1]);
    printf("Rolls: %d Address: %u\n",s[1][0],&s[1][0]);
    printf("Marks: %d  Address: %u\n",s[1][1],&s[1][1]);
    printf("Rolls: %d Address: %u\n",s[2][0],&s[2][0]);
    printf("Marks: %d  Address: %u\n",s[2][1],&s[2][1]);
    printf("Rolls: %d Address: %u\n",s[3][0],&s[3][0]);
    printf("Marks: %d Address: %u\n",s[3][1],&s[3][1]);
}
