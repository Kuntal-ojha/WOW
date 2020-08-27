// Demonstration of passing an array to a function.
// Created by KUNTAL OJHA RAJ on 8/9/2020.
//
#include <stdio.h>
void display1(int *,int );
void display2(int [],int );
int main()
{
    int num[]={24,34,12,44,56,17};
    display1(&num[0],6);
    printf("\n");
    display2(&num[0],6);
    return 0;
}
void display1(int *j,int n)
{
    int i;
    for ( i = 0; i <=n-1; i++) // i<=n-1 so last one also print.
    {
        printf("%d.Element=%d\n",i,*j);
        j++; // Increment pointer to point to next element
    }
}
void display2(int j[],int n)
{

    int i;
    for ( i = 0; i <n-1; i++) // i<n-1 so last one can't print
    {
        printf("%d.Element=%d\n",i,j[i]);
    }
}
