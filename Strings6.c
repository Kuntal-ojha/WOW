// A Look alike of The Function strlen()*
// Created by KUNTAL OJHA RAJ on 8/25/2020.
//
#include <stdio.h>
#include <string.h>
int xstrlen(char *);
int main()
{
    char arr[]="Bamboozled";
    int len1,len2;
    len1=xstrlen(arr);
    len2=xstrlen("Humpty Dumpty");
    printf("String=%s Length=%d\n",arr,len1);
    printf("String=%s Length=%d\n","Humpty Dumpty",len2);
    return 0;
}
int xstrlen(char *s)
{
    int length=0;
    while (*s!='\0')
    {
        length ++;
        s++;
    }
    return (length);
}
