// [A] What will be the output of the following programs:
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (f)
#include <stdio.h>
int main()
{
    float x=1.1;
    while (x==1.1)
        /*
         * 1.1 ta extra kichu thakbe. Mane ota 1.100005456
         * hote pare Mane 1.1 habe na
         * Thai while loop ta false habe
         */
        /*
         * No Output. Since a float variable is compared with
         * double constant, condition will not satisfy.
         */
    {
        printf("%f\n",x);
        x=x-0.1;
    }
}