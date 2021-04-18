// Type of GATE Exam Question
// Created by KUNTAL OJHA RAJ on 9/23/2020.
// Very Conceptual Question
#include <stdio.h>
int main()
{
    int a;
    if (scanf("Enter the if Condition value:\n%d",&a),printf("%d",a))
        // Every non-zero value is true only zero is false in if condition.
        // But remember one things Hear no mater which value run through the if statement
        // when some value of printf or scanf will pass through the if statement then the if part will execute
        printf("\nIf condition is True.");
    else
        printf("\nIf condition is False.");
    return 0;
}

