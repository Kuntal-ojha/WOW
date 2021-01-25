// Question [C] Point out the errors, if any, in the following program:
// Created by KUNTAL OJHA RAJ on 1/25/2021.
#include <stdio.h>
int main()
{
    int i=10,j;
    /*
     lvalue required as left operand of assignment
     i>=5?j=10:j=15;
     */
    i>=5?j=10:j=15;
    printf("%d%d\n",i,j);
    return 0;
}

