//
// Created by KUNTAL OJHA RAJ on 1/13/2021.
//
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char *msg;
    msg=(char *)malloc(30*sizeof (char ));
    strcopy(msg,"Able was I");
    printf("The message new is %d \n",msg);
    msg=(char *)realloc(msg,50);
    strcopy(msg,"Able I saw Elba....");
    printf("\n The message is now %s",msg);
    free(msg);
    getch();
}
