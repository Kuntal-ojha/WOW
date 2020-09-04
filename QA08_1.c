// Calculate Simple Interest In a creative Way.
// Created by KUNTAL OJHA RAJ on 9/4/2020.
// Simple Interest SI=(P*N*R)/100
#include <stdio.h>
int main()
{
    float P,N,R;
    scanf("%f",&P,printf("Enter The value of Internal Principal Balance:\n"),scanf("%f",&N,printf("Enter The value of Number of Years:\n"),scanf("%f",&R,printf("Enter The value of Annual Interest Rate:\n"))));
    /*
     * SI= Simple Interest.
     * p= Internal Principal Balance.
     * R= Annual Interest Rate.
     * N= Number of Years.
     */
    printf("Simple Interest:\n%.2f\n",(P*N*R)/100);
    printf("Now Your Balance:\n%.2f",((P*N*R)/100)+P);
    return 0;
}
