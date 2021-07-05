//
// Created by kuntal on 05-07-2021.
//
#include <stdio.h>
int main()
{
    const float pi=3.1416; // Hear i use const for define the variable constant.
    pi=100;
    int radius=21;
    float area=pi*radius*radius;
    printf("The area of the circle is %.2f square units",area);
    return 0;
}
