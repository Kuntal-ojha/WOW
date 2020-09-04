// Calculate Simple Interest
// Created by KUNTAL OJHA RAJ on 9/4/2020.
// Simple Interest SI=(P*N*R)/100
#include <stdio.h>
int main()
{
    float SI,P,N,R;
    printf("Enter value of P,N and R:\n");
    scanf("%f%f%f",&P,&N,&R);
    /*
     * SI= Simple Interest.
     * p= Internal Principal Balance.
     * R= Annual Interest Rate.
     * T= Time (in years)
     * Hear i Use N it's Replace T
     * N= Number of Years.
     */
    SI=(P*N*R)/100;
    printf("Simple Interest:\n%.2f",SI);
    return 0;
}

