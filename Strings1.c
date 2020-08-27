// One more Example of Strings
// Created by KUNTAL OJHA RAJ on 8/21/2020.
// Use Pointers in Strings.
#include <stdio.h>
int main()
{
    char name[]="WELCOME";
    char *ptr;
    ptr=name; // Store Basic Address of String
    while (*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
      //  printf("\n");
    }

    return 0;
}
