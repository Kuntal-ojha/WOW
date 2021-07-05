// Use new function grtchar() for input
// Like size=getchar(); Instead of scanf("%c",&size);
// use new function putchar() for output
// Like putchar(size); Instead of printf("%c",size);
// Created by kuntal on 05-07-2021.
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number:\n");
    number=getchar();
    putchar(number); // its print only one single value.
    return 0;
}

