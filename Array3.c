// Use array One more Example.
// Created by KUNTAL OJHA RAJ on 8/8/2020.
// int ineed
#include <stdio.h>
int main()
{
    int arr[]={10,20,30,45,67,56,74};
    int i=4,*j,*k,*x,*y,z;
    j=&i;
    printf("  j= %u\n",j);
    j=j+9; /* pointer plus Number */
    printf("j+9= %u\n",j);
    k=&i;
    printf("  k= %u\n",k);
    k=k-3; /* pointer minus Number */
    printf("k+3= %u\n",k);
    x=&arr[1];
    printf("  x= %u\n",x);
    y=&arr[5];
    printf("  y= %u\n",y);
   z= y-x; // Pare int block is 4 so. (4*4=16)
    printf("  z= %d\n",z);
    printf("y-x= %u\n",y-x);
    j=&arr[4];
    printf("  j= %u\n",j);
    k=(arr+4);
    printf("  k= %u\n",k);
    if (j==k)
        printf("The two pointers point to the Same location\n");
    else
        printf("The two pointers point to the Different location\n");
    return 0;
}
