// Use of getchar() and putchar()
// Created by KUNTAL OJHA RAJ on 9/8/2020.
#include <stdio.h>
int main()
{
    char ch;
    printf("\nType any alphabet\n");
    /*
     * Must be followed by enter key
     */
    ch=getchar(); // It's Use for scan char.
    printf("You typed:\n");
    putchar(ch); // It's Use for print char.
    return 0;
}

