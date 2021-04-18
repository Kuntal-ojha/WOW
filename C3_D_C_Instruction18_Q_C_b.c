// [C] Attempt the following Question (b)
// Created by KUNTAL OJHA RAJ on 10/6/2020.
// Any integer is input through the keyboard. Write a program to find
// the program to find out whether it is an odd number or ever number
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter any number:\n");
    scanf("%d",&i);
    j=i;
    if (i%2==0)
        printf("The number is even:%d",j);
    else
        printf("The number is odd:%d",j);
    return 0;
}
