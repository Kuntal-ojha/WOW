// How to gate input a string of name like Kuntal Ojha.
// Created by kuntal on 05-07-2021.
// scanf("%[^\n]%*c",);
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter your name:\n");
    scanf("%[^\n]%*c",name);
    printf("Your name is %s",name); // %s for string
}

