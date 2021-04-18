// One More Example of Strings
// Created by KUNTAL OJHA RAJ on 8/29/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char *names[6];
    char n[50];
    int len,i;
    char *p;
    for (i=0;i<=5;i++)
    {
        printf("Enter Name:\n");
        scanf("%s",n);
        len=strlen(n);
        p=(char*)malloc(len+1);
        strcpy(p,n);
        names[i]=p;
    }
    for(i=0;i<=5;i++)
        printf("%s\n",names[i]);
    return 0;
}
