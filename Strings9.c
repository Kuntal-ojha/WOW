// Use Function strcat()
// Created by KUNTAL OJHA RAJ on 8/25/2020.
// It's use for add Two Word.
#include <stdio.h>
#include <string.h>
int main()
{
    char  source[]="Folks";
    char target[30]="Hello";
    strcat(target,source);
    printf("Source String=%s\n",source);
    printf("Target String=%s\n",target);
    return 0;
}
