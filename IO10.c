// Very Interesting  Program
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// But I can't Understand.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    ch=getchar();
    if (islower(ch))
    putchar(toupper(ch));
    else
    putchar(tolower(ch));
    return 0;
}

