// This is the Limitation of Array of Pointers to Strings.
// Created by KUNTAL OJHA RAJ on 8/26/2020.
// This is the SOLUTION:
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *names[6];
    char n[50];
    int len,i;
    char *p;
    for(i=0;i<=5;i++)
    {
        printf("Enter name:\n");
        scanf("%s",n);
        len=strlen(n);
        p=(char *)malloc(len+1);
        /*
         *  +1 for accommodating \0
         * */
        strcmp(p,n);
        names[i]=p;
    }
    for(i=0;i<=5;i++)
        printf("%s\n",names[i]);
    return 0;
}

