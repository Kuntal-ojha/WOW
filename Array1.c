// Passing Array Elements to a Function.
// Created by KUNTAL OJHA RAJ on 8/6/2020.
// Demonstration of call by value & call by reference.
#include <stdio.h>
void display1(int );
void display2(int *);
int main()
{
    int i;
    int marks[]={55,65,75,56,78,78,90};
    for (i=0;i<=6;i++)
        display1(marks[i]); // Passing value of array element.
        printf("\n");
    for (i=0;i<=6;i++)
        display2(&marks[i]); // Passing address of array element. (*) Value at Address operator.
    return 0;
}
void display1(int m)
{
    printf(" Display1:%d\n",m);
}
void display2(int *n)
{

    printf(" Display2:%d\n",*n);
}