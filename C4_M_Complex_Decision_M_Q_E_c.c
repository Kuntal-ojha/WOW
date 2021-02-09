// [E] Attempt the following
// Write a program to find the greatest of the three numbers
// entered through the keyboard. Use conditional operators.
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main() {
    int n1, n2, n3, great;
    printf("Enter three number:\n");
    scanf("%d%d%d", &n1, &n2, &n3);
    great=n1>n2?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("Greatest number is:%d",great);
}