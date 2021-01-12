// Break Statement Example.
// Created by KUNTAL OJHA RAJ on 1/12/2021.
// Example: 02
#include <stdio.h>
int main()
{
    int Good,Bad;
    for ( Good = 0; Good <=1 ; Good++)
    {
        printf("Good1=%d\nBad1=%d\n\n",Good,Bad);
        for (Bad = 0; Bad <=1 ; Bad++)
        { // good=0 bad =1
            {
                if (Good==Bad)
                    continue;
                printf("Good=%d\nBad=%d\n\n",Good,Bad);
            }
        }
    }
}
