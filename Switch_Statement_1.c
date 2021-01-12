// Switch Statement Example.
// Created by KUNTAL OJHA RAJ on 1/12/2021.
// Example: 02
#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number between 1 to 5\n");
    scanf("%d",&i);
    switch (i) {
        case 1:
            printf("I am in case 1\n");
            break;
        case 2:
            printf("I am in case 2\n");
            break;
        case 3:
            printf("I am in case 3\n");
            break;
        case 4:
            printf("I am in case 4\n");
            break;
        case 5:
            printf("I am in case 5\n");
            break;
        default:
            printf("I am in default\n");
    }
    return 0;
}


