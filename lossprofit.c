//
// Created by KUNTAL OJHA RAJ on 6/26/2020.
//
#include <stdio.h>
int main ()
{
    float cp,sp,p,l;
    printf("\nEnter cost price and selling price");
    scanf("%f%f",&cp,&sp);
    p=sp-cp;//profit =Selling price - cost price
    l=cp-sp;//loss = cost price - Selling price
    if (p>0)
        printf("The seller has made a profit of Rs=%f\n",p);
    if (l>0)
        printf("The sellar is in loss by Rs=%f\n",l);
    if (p==0)
        printf("Ther is no loss or profit.\n");
    if (l==0)
        printf("There is no profit,no loss.");
    return 0;

}

