// High to Low
// Created by KUNTAL OJHA RAJ on 7/22/2020.
// Using for Loop
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Value \n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        if (b>c)
            printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",a,b,c,a,b,c,c,b,a);
        else
            printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",a,c,b,a,c,b,b,c,a);
    } else if (b>a && b>c)
    {
        if (a>c)
            printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",b,a,c,b,a,c,c,a,b);
        else
            printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",b,c,a,b,c,a,a,c,b);
    } else
    if (a>b)
        printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",c,a,b,c,a,b,b,a,c);
    else
        printf("Max Value is:%d\nMead Value is:%d\nMin Value is:%d\nHigh to Low:\n%d>%d>%d\nLow to High:\n%d<%d<%d",c,b,a,c,b,a,a,b,c);
    printf("\nThank You\2");
    return 0;
}
