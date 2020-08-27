// One more examole of data type.
// Created by KUNTAL OJHA RAJ on 8/3/2020.
//  Use of extern Example.
#include <stdio.h>
int x=21;
int main()
{
    extern int y; // it works for return global variable.
    printf("x=%d\ny=%d\n",x,y);
    return 0;
}
int y=31; // Hear extern use because i will print y.
