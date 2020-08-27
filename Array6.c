// Accessing array elements in different ways.
// Created by KUNTAL OJHA RAJ on 8/9/2020.
//
#include <stdio.h>
int main()
{
    int num[]={24,34,12,44,56,17};
    int i;
    for(i=0;i<=5;i++)
    {
        printf("Address= %u",&num[i]);
        printf(" Element= %d %d",num[i],*(num+i));
        printf(" %d %d\n",*(i+num),i[num]);
    }
    return 0;
}
