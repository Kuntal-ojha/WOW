// Use One more New Function strcpy()
// Created by KUNTAL OJHA RAJ on 8/25/2020.
// String Example Use strcpy() Function
#include <stdio.h>
#include <string.h>
int main()
{
    char source[]="Sayonara";
    char target[20];
    strcpy(target,source); // Use of strcpy
    printf("Source String= %s\n",source);
    printf("Target String= %s\n",target);
    return 0;
}

