// [D] Attempt the following
// If a character is entered through the keyboard, write a program to determine whether
// the character is a capital letter, s small case letter, a digit or a special symbol.
// The following table shows the range of ASCII values for various characters:
/*
 *   Character        |       ASCII Values
 *      A-Z           |          65-90
 *      a-z           |          97-122
 *      0-9           |          48-57
 *    Special Symbols |  0-47,58-64,91-69,123-127
 */
// Created by KUNTAL OJHA RAJ on 1/29/2021.
//
#include <stdio.h>
int main()
{
    char a;
    printf("Enter character:\n");
    scanf("%c",&a);
    if(a>64&&a<91)
        printf("It's capital letter.");
    else if(a>=97&&a<=122)
        printf("It's small case letter.");
    else if(a>=48&&a<=57)
        printf("It's digits.");
    else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
        printf("It's Special symbol.");
    return 0;
}
