// Use strlen() Find length of a string
// Created by KUNTAL OJHA RAJ on 8/22/2020.
// Hear I use Standard Library Functions.
#include <stdio.h>
#include <string.h>
int main()
{
    char arr[]="Bamboozled";
    int len1,len2;
    len1=strlen(arr);
    len2=strlen("Humpty Dumpty");
    printf("String=%s Length=%d\n",arr,len1);
    printf("String=%s Length=%d\n","Humpty Dumpty",len2);
    return 0;
}

