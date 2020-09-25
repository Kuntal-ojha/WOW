// Type of GATE Exam Question
// Created by KUNTAL OJHA RAJ on 9/23/2020.
// Very Hard Question
#include <stdio.h>
int main()
{
    int i=0;
    if (printf("%i\n",i)) // Every non-zero value is true only zero is false in if condition.
        // But remember one things Hear no mater which value run through the if statement
        // when some value of printf or scanf will pass through the if statement then the if part will execute
        printf("If Condition is true.");
    else
        printf("If condition is false.");
    return 0;
}

