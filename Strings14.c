// Example in String [A] (c)
// Created by KUNTAL OJHA RAJ on 8/26/2020.
// Good Question.
#include <stdio.h>
int main()
{
    char s[]="No two viruses work similarly";
    int i=0;
    while (s[i]!=0)
    {
        printf("%c%c\n",s[i],*(s+i));
        printf("%c%c\n",i[s],*(i+s));
        i++;
    }
    return 0;
}