// Simple Question Page:60.
// Created by KUNTAL OJHA RAJ on 11/21/2020.
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
    int age;
    char sex,marital_status;
    printf("\nEnter age,sex(Male=M & Female=F),marital(Married=M & Unmarried=U) status:\n");
    scanf("%d %c %c",&age,&sex,&marital_status);
    if ((marital_status=='M')||((marital_status=='U')&&(sex=='M')&&(age>30))||((marital_status=='U')&&(sex=='F')&&(age>25)))
        printf("Driver should be insured.\n");
    else
        printf("Driver should not be insured.\n");
    return 0;
}