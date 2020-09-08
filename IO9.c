// Hare i use gets() and puts()
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// puts Use for Print And gets Use for scan Some Things.
#include <stdio.h>
int main()
{
    char footballer[40];
    puts("Enter name:");
    gets(footballer); // sends base address of array
    puts("Happy Footballing!");
    puts(footballer); // Hear it's print the value of char footballer[]40
    return 0;
}

