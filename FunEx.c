// Exercise [B]
// Created by KUNTAL OJHA RAJ on 7/21/2020.
// Q.(a)
#include<stdio.h>
int add (int,int );
int main()
{
    int i=3,j=4,k,l;
    k=add(i,j);
    l=add(i,j);
    printf("%d\n%d",k,l);
    return 0;
}
int add (int ii,int jj)
{
    int kk,ll;
    kk=ii+jj;
    ll=ii*jj;
    return (kk,ll);
}
