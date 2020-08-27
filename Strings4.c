// Pointers and Strings.
// Created by KUNTAL OJHA RAJ on 8/21/2020.
// This a New Method.
#include <stdio.h>
int  main()
{
    char str1[]="Hello";
    char str2[10];
    char *s="Good Morning";
    char *q;
    /* Error It's Can't Work Properly */
   // str2=str1;
   // q=s It's Work properly
    q=s;
    // We Cane Change The value Use of this line
    // q="Good Night ";
    printf("%s",q); // Hear i use %s to print Pointers Value.
    return 0;
}

