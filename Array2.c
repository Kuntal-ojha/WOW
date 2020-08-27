// Example of Pointers and Array.
// Created by KUNTAL OJHA RAJ on 8/8/2020.
// int need  4 bytes of Memory  float need 4 bytes of Memory  and char need 1 byte of Memory.
#include <stdio.h>
int main()
{
    int i=3,*x;
    float j=1.5,*y;
    char k='c',*z;
    printf("Value of i=%d\n",i);
    printf("Value of j=%f\n",j);
    printf("Value of k=%c\n\n",k);
    x=&i; y=&j;z=&k;
    printf("Original address in x=%u\n",x);
    printf("Original address in y=%u\n",y);
    printf("Original address in z=%u\n\n",z);
    x++; y=y+1; z=z+1;
    printf("New address in x=%u\n",x);
    printf("New address in y=%u\n",y);
    printf("New address in z=%u\n",z);
    return 0;
}
