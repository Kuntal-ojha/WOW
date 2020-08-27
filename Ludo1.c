//
// Created by KUNTAL OJHA RAJ on 7/30/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int b,c,k,n,d;
    time_t t;
    // Initializes random number generator
    srand((unsigned) time(&t));
    printf("Enter players number:\n");
    scanf("%d",&c);
    // For loop use for print random number more time
    for (int b = 1; b <=c ; b++ ) {
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
        printf("\n\3Thank You Use me Again\3\n\n");

    }
}
