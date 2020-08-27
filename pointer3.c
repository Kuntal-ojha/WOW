// Pointer More Impotent example
// Created by KUNTAL OJHA RAJ on 7/24/2020.
// Using Pointer one more Example number 4.
#include<stdio.h>
int main()
{
    int i=3;
    int *j;
    int **k;
    j=&i;
    k=&j;
    printf("Address of i=%u\n",&i);
    printf("Address of i=%u\n",j);
    printf("Address of i=%u\n",*k);
    printf("Address of j=%u\n",&j);
    printf("Address of j=%u\n",k);
    printf("Address of k=%u\n",&k);
    printf("Value of j=%u\n",j);
    printf("value of k=%u\n",k);
    printf("Value of i=%d\n",i);
    printf("Value of i=%d\n",*(&i));
    printf("Value of i=%d\n",*j);
    printf("Value of i=%d\n",**k);
    return 0;
}
