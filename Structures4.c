// One More Example of Array of Structure
// Created by KUNTAL OJHA RAJ on 9/5/2020.
// Hear I use a New Method.
#include <stdio.h>
int main()
{
    struct book
    {
        char name;
        float price;
        int Pages;
    };
    struct book b[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("Enter name,price and pages\n");
        scanf("\n%c %f %d",&b[i].name,&b[i].price,&b[i].Pages);
    }
    for (i=0;i<=4;i++)
        printf("\n%c %f %d",b[i].name,b[i].price,b[i].Pages);
    return 0;
}
