// [A] What will be the output of the following programs:
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (f)
#include <stdio.h>
int main()
{
    double x=1.1;
    while (x==1.1)
         /*
         * Since a float variable is compared with
         * double constant, condition will not satisfy.
         */
    {
        printf("%f\n",x);
        x=x-0.1;
    }
}