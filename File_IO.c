// Display contenst of a file on screen.
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// This is First Program in Final Input Output.
#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("PR1.c","r");
    while (1)
    {
        ch=fgetc(fp);
        if (ch==EOF)
            break;
        printf("%c",ch);
    }
    printf("\n");
    fclose(fp);
    return 0;
}

