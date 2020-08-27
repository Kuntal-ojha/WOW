// Program to illustrate the
// Created by KUNTAL OJHA RAJ on 8/6/2020.
// #pragma GCC poison directive
#include<stdio.h>
// Use of #pragma GCC poison.
#pragma GCC poison printf
int main()
{
    int a=10;

    if(a==10)
    {
        printf("GEEKSFORGEEKS");
    }
    else
        printf("bye");
    return 0;
}
/* OUTPUT:
 prog.c: In function 'main':
prog.c:14:9: error: attempt to use poisoned "printf"
 printf("GEEKSFORGEEKS");
 ^
prog.c:17:9: error: attempt to use poisoned "printf"
 printf("bye");
 ^
 */