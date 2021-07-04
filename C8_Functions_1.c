// This is first program in Functions.
// Created by kuntal on 29-06-2021.
// Simple Example
#include <stdio.h>
void italy(); // Function prototype declaration
void brazil(); // Function prototype declaration
void argentina(); // Function prototype declaration
int main()
{
    printf("I am a man. My name is Kuntal Ojha.\n");
    italy(); // Function call
    brazil(); // Function call
    argentina(); // Function call
    return 0;
}
void italy() // Function definition
{
    printf("I am in Italy\n");
}
void brazil() // Function definition
{
    printf("I am in Brazil\n");
}
void argentina() // Function definition
{
    printf("I am in Argentina\n");
}