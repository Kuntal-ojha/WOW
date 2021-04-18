// Hare I Use #pragma pack(1)
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Packing Structure Elements
#include <stdio.h>
#include <conio.h>
#pragma pack(1)
struct emp
{
    int a;
    char ch;
    float s;
};
#pragma pack()
int main()
{
    struct emp e;
    printf("\n%u\n%u\n%u",&e.a,&e.ch,&e.s);
    getch();
}

