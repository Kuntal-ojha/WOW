// This is the first program in for loop.
// Created by KUNTAL OJHA RAJ on 12/10/2020.
// simple statement in for loop.
// C:\Users\dell\CLionProjects\MyProject
/*
 * 1. Setting a loop create to an initial value.
 * 2. Testing the loop counter to determine whether its value has
 *    reached the number of repetition desired.
 * 3. Increasing the value of loop counter each time the body
 *    of the loop has been executed.
 *
 *    for(initialize counter ;  test counter ; increment counter)
 *    {
 *       do this;
 *       and this;
 *       and this;
 *     }
 */
#include <stdio.h>
int main()
{
    int i,k;
    for ( i = 0; i<10; ++i) {
        for ( k = 0; k<i ; ++k) {
            printf("*");
        }
        printf("\n");
    }
}