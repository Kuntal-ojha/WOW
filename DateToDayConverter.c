// Date to day Converter.
// Created by KUNTAL OJHA RAJ on 7/14/2020.
// Date:14/07/2020 Time: 07:14PM.
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,total;
    printf("Enter Date: like(DD/MM/YYYY)\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("Date is :%d/%d/%d",a,b,c);
    if (b==1||b==10)
    {
        b=0;
    } else if (b==2||b==3||b==11)
    {
        b=3;
    } else if (b==4||b==7)
    {
        b=6;
    } else if (b==5)
    {
        b=1;
    } else if (b==6)
    {
        b=4;
    } else if (b==8)
    {
        b=2;
    } else if (b==9||b==12)
    {
        b=5;
    }
    d=c-1900;
    e=d/4;
    f=a+b+e+d;
    total=f%7;
    if (total==0)
    {
        printf("\nSunday.");
    } else if(total==1)
    {
        printf("\nMonday.");
    } else if (total==2)
    {
        printf("\nTuesday.");
    } else if (total==3)
    {
        printf("\nWednesday.");
    } else if (total==4)
    {
        printf("\nThursday.");
    } else if (total==5)
    {
        printf("\nFriday.");
    } else if (total==6)
    {
        printf("\nSaturday.");
    }
printf("\n\n\1 Thank You \2");
    return 0;
}
