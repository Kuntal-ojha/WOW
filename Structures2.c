// Hear i use sizeof function in struct .
// Created by KUNTAL OJHA RAJ on 9/4/2020.
// Hear total Size is 12
#include <stdio.h>
struct Employee
{
    int employee;
    char employeeName[4];
    float employeeSalary;
};
int main()
{
    struct Employee N;
    printf("Size of Employee:%d\n",sizeof(N));
    printf("Size of Employee:%d",sizeof(struct Employee));
}
