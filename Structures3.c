// Using Array of Structures
// Created by KUNTAL OJHA RAJ on 9/5/2020.
// I Think This is The Best Way to Work With Different Variable.
// Uncomplit  Program. :(
#include <stdio.h>
void link_float();
int main()
{
    struct book
    {
        char name;
        float price;
        int pages;
    };
    struct book b[10];
    int i;
    int dh;
    for(i=0;i<=1;i++)
    {
        printf("Enter name,price and pages\n");
        scanf("\n%c %f %d\n",&b[i].name,&b[i].price,&b[i].pages);
        while ((dh=getchar())!='\n')
            ;
    }
    for(i=0;i<=1;i++)
        printf("\n%c %f %d\n",&b[i].name,&b[i].price,&b[i].pages);
    return 0;
}
void link_float()
{
    float a=0,*b;
    b=&a;
    a=*b;
}