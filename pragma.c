// Use of #pragma startup and #pragma exit.
// Created by KUNTAL OJHA RAJ on 8/5/2020.
//  Below program will not work with GCC compilers.
//  Look at the below program.
#include <stdio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    printf("Inside main\n");
    return 0;
}
void fun1()
{
    printf("Inside fun1\n");
}
void fun2()
{
    printf("Inside fun2\n");
}
// This program can't work GCC compilers. My compiler is GCC compiler
// Out put of this program is : Inside main.
// Without GCC compiler This program output is
// Inside func1
// Inside main
// Inside func2
