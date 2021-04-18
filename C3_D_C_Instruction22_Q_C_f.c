// [C] Attempt the following Question (f)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// If age of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("\nEnter age of Ram, Shyam and Ajay\n");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if (ram>shyam && ram>ajay)
        printf("The Youngest Person is Ram.");
    else if (shyam>ram && shyam>ajay)
        printf("The Youngest Person is Shyam.");
    else //if (ajay>ram && ajay>shyam)
        printf("The Youngest Person is Ajay.");
    return 0;
}
