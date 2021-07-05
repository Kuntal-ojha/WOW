// Relational Operators
// Created by kuntal on 05-07-2021.
#include<stdio.h>
int main()
{
    int x=2;
    int y=3;
    int z=3;

    int r1=x>y;
    int r2=y>=x;

    int r3=x<y;
    int r4=y<=x;

    int r5=y==z;
    int r6=z!=x;

    printf("The value of r1: %d\n",r1);
    printf("The value of r2: %d\n",r2);
    printf("The value of r3: %d\n",r3);
    printf("The value of r4: %d\n",r4);
    printf("The value of r5: %d\n",r5);
    printf("The value of r6: %d\n",r6);
    return 0;
}

