// Array element are always stored in contiguous memory locations.
// Created by KUNTAL OJHA RAJ on 8/9/2020.
// A pointer when incremented always points to the next location of its type.
#include <stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i,*j;
    j=&num[0]; // assign address of zeroth element
    for ( i = 0; i <=5 ; i++) {
        printf("Address= %u Element= %d\n",j,*j);
        j++; // increment pointer to point to next location
    }
    return 0;
}
