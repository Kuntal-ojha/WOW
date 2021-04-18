// Created by KUNTAL OJHA RAJ on 11/22/2020.
// A Company insures its drives in the following cases:
/*
 * 1.If the driver is married.
 * 2.If the driver is unmarried,male & above 30 years of age.
 * 3.If the driver is unmarried, female & above 25 years of age.
 * ==>
 * In all others case, the driver is not insured.If the marital status,
 * sex and age of the driver are the inputs, Write a program to determine
 * whether the driver should be insured or not.
 */
#include <stdio.h>
int main()
{
    int a;
    char s,ms;
    printf("\nEnter age,sex(Male=M & Female=F) and marital(Married=M & Unmarried=U) status:\n");
    scanf("%d %c %c",&a,&s,&ms);
    if ((ms=='M')||((ms=='U')&&((s=='M'&&a>30)||(s=='F'&&a>25))))
        printf("Driver should be insured.\n");
    else
        printf("Driver should not be insured.\n");
    return 0;
}
