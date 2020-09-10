//  Packing Structure Element
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Consider the following code snippet.
#include <stdio.h>
#include <conio.h>
struct emp
{
    int a;
    char ch;
    float s;
};
int main()
{
    struct emp e;
    printf("\n%u\n%u\n%u",&e.a,&e.ch,&e.s);
    getch();
}

