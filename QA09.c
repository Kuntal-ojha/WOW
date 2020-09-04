// Find Square & Qube.
// Created by KUNTAL OJHA RAJ on 9/4/2020.
// Square=n*n and Qube=n*n*n.
#include <stdio.h>
#include <conio.h>
int main()
{
    int n,Square,Cube;
    printf("Enter a Number:\n");
    scanf("%d",&n);
    Square=n*n;
    Cube=n*n*n;
    printf("Square:%d\nCube:%d",Square,Cube);
    getch();
}
