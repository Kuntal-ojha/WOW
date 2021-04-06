// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (g)
/*
 * Write a program to enter numbers til the user wants. At the end it should
 * display the count of positive,negative and zeros entered.
 */
#include <stdio.h>
#include <conio.h>
int main()
{
    int number,positive=0,negative=0,zero=0;
    char choice;
    do {
        printf("Enter the number:\n");
        scanf("%d",& number);
        if (number>0)
        {
            positive++;
        } else if (number<0)
        {
            negative++;
        } else
        {
            zero++;
        }
        printf("Do you wont to continue(y/n)\n");
        scanf(" %c",& choice);
        /*
         * scanf("%c",& choice); this is not the right way to scan character
         * the wright way is
         * scanf(" %c",& choice);
         * we need to use space before %c
         */
    } while (choice =='y'||choice =='Y');
    printf("\nCount of positive is:%d\n",positive);
    printf("Count of negative is:%d\n",negative);
    printf("Count of zero is:%d\n",zero);
    getch();
}