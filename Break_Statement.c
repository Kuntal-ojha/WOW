// Break Statement Example.
// Created by KUNTAL OJHA RAJ on 1/12/2021.
// Example: 01
#include <stdio.h>
int main()
{
    int Good,Bad;
    for ( Good = 0; Good <=1 ; Good++)
    {
        for (Bad = 0; Bad <=1 ; Bad++)
        {
            {
                if (Good==Bad)
                    break;
                printf("Good=%d\nBad=%d\n\n",Good,Bad);
            }
        }
    }
}
