//
// Created by KUNTAL OJHA RAJ on 8/18/2020.
//
#include <stdio.h>
int main()
{
    static int a[]={0,1,2,3,4,};
    int *p[]={a,a+1,a+2,a+3,a+4};
    printf("%u\n%u\n%d",p,*p,*(*p));
    return 0;
}
