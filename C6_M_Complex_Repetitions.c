// This is the first program in for loop.
// Created by KUNTAL OJHA RAJ on 12/10/2020.
// simple statement in for loop.
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
    int p,n,count;
    float r,si;
    for ( count = 1; count <=3; ++count) {
        printf("Enter the value of p,n and r:\n");
        scanf("%d%d%f",&p,&n,&r);
        si=p*n*r/100;
        printf("Simple interest=Rs.%d",si);
    }
    return 0;
}
