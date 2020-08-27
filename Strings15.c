// Example in String [A] (d)
// Created by KUNTAL OJHA RAJ on 8/26/2020.
// More Use of String
#include <stdio.h>
int main()
{
    char s[]="Churchgate:no church no gate";
    char t[25];
    char *ss,*tt;
    ss=s;
    while (*ss!='\0')
        *tt++=*ss++;
    printf("%s\n",t);
    return 0;
}
