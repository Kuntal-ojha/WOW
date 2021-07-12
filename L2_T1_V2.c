// Codding Challenge.
// Created by kuntal on 06-07-2021.
// Question:  Write a program to calculate
// (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series,
// where 'n' is the user input.
#include <stdio.h>
int main()
{
    int n,sum=0;
    puts("Enter the nth number of this series (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n)");
    scanf("%d",&n);
        for (int j = n; j >=1 ; j--) {
            sum=sum+(j*j);
        }
    printf("Sum of the series is %d",sum);
    return 0;
}
