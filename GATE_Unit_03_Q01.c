// Q.01 What will be the output of the following program?
// Created by KUNTAL OJHA RAJ on 9/23/2020.
// Very Hard Question.
#include <stdio.h>
void main()
{
    int i;
    char a[]=" \0"; // 0 and \0 are not Equal.
    if (printf("%s\n",a)) // if Condition is false when if value is zero .
        // Every non-zero value is true in if condition.
        printf("ok \n");
    else
        printf("Program error \n");
}

