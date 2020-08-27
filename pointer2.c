// Simple Example of A pointer so now start.
// Created by KUNTAL OJHA RAJ on 7/24/2020.
// Simple pointers program Example number 3.
#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    j=&i;
    printf("Address of i=%u\n",&i);
    printf("Address of i=%u\n",j);
    printf("Address of j=%u\n",&j);
    printf("Value of j=%u\n",j);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    printf("value of i=%d\n",*j);
    return 0;
}

