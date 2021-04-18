// Question [C] Point out the errors, if any in the following program:
// Created by KUNTAL OJHA RAJ on 1/25/2021.
#include <stdio.h>
int main()
{
    int n=9;
    /*
     error: expected ':' before ';' token
     (n==9?printf("Correct\n");:printf("Wrong\n"););
                              ^
                              :
    */
    (n==9?printf("Correct\n");:printf("Wrong\n"););
    return 0;
}

