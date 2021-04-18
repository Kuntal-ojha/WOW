// [E] Attempt the following
// (a) Using conditional  operators determine:
// (2) Whether the character entered through the keyboard is a special symbol or not.
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main()
{
    char a;
    if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
        printf("It's a special symbol.");
    else
        printf("Not a special symbol");
    return 0;
}