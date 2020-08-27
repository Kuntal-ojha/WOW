// Program to demonstrate printing of string.
// Created by KUNTAL OJHA RAJ on 8/21/2020.
// First Example of String.
#include <stdio.h>
int main()
{
    char name[]="WELCOME";
    int i=0;
    while (i<=6)
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    i=0;
    while (name[i]!='\0')
    {
        printf("%c",name[i]);
        i++;
    }
    printf("\n");
    return 0;
}
