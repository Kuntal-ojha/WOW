// I am try to make two Dice Rolling Cube.
// It's uses for Business game.
// Created by KUNTAL OJHA RAJ on 7/26/2020.
// Hear i use random function rand();
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int k,n,d;
    time_t t;
    // Initializes random number generator
    srand((unsigned) time(&t));
    //print 6 random numbers from 1 to 6
    k=rand()%6+1;
    n=rand()%6+1;
    d=k+n;
    printf("First Cube:%d\n",k);
    printf("Second Cube:%d\n",n);
    if (k==n)
    {
        printf("\nWow !\2 Two Cube are same.\1\nYour Total Point is:%d",d);
    } else
    {
        printf("\nYour Total Point is:%d\n",d);
    }
    printf("\n\3Thank You Use me Again\3\n");
    return (0);
}
