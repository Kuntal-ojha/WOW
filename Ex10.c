// Use switch statements.
// Created by KUNTAL OJHA RAJ on 7/16/2020.
// Example of switch statements.
/*
 * switch(integer expression)
 * {
 * case constant 1:
 *      do this;
 * case constant 2:
 *      do this;
 * case constant 3:
 *      do this;
 * default:
 * do this;
 * }
 */
#include <stdio.h>
int main()
{
    int i=1;
    switch (i) {

        case 2:
            printf("I am in case 2\n");
        case 3:
            printf("I am in case 3\n");
        default:
            printf("i am in default\n");
        case 1:
            printf("I am in case 1\n");

    }
}