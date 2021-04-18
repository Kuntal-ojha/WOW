// [A] What will be the output of the following programs:
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (a)
#include<stdio.h>
int main()
{
    int i=1;
    while (i<=10);
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
/*
 * No output, Indefinite while loop because of a ';' at the end of while.
 * */

