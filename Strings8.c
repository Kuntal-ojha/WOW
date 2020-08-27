// String Function
// Created by KUNTAL OJHA RAJ on 8/25/2020.
// Copy Without Using strcpy
#include <stdio.h>
void xstrcpy(char *,char *);
int main()
{
    char source[]=" KUNTAL OJHA";
    char target[20];
    xstrcpy(target,source);
    printf("Source String=%s\n",source);
    printf("Target String=%s\n",target);
    return 0;
}
void xstrcpy(char *t,char *s)
{
    while (*s!='\0')
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}