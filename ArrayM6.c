// One More Example in Multidimensional Array.
// Created by KUNTAL OJHA RAJ on 8/18/2020.
// Very Interesting Example Where i use Array of A pointers.
#include <stdio.h>
int main()
{
    int *arr[4]; // Array of integer pointers.
    int i=31,j=50,k=19,l=71,m;
    arr[0]=&i;
    arr[1]=&j;
    arr[2]=&k;
    arr[3]=&l;
    for (m=0;m<=3;m++)
        printf("Value=%d Address=%d\n",*(arr[m]),&(arr[m]));
    return 0;
}

