// Question [H] (h)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// Two number are input through the keyboard into two locations C and D.
// Write a program to interchange the contents of C and D
// Now I Write a Program to Interchanging of two variables C and D
#include <stdio.h>
int main()
{
    int C,D,E;
    printf("Enter The number at Location C:\n");
    scanf("%d",&C);
    printf("Enter The number at Location D:\n");
    scanf("%d",&D);
    /*
     * Interchange contents of two variables using a third variable as temporary store
     */
    E=C;
    C=D;
    D=E;
    printf("New Number at Location C=%d\n",C);
    printf("New Number at Location D=%d\n",D);
    return 0;
}

