//
// Created by kuntal on 05-07-2021.
/*
Write a program to provide appropriate feedback to a student based on grade secured in the exam.
Consider the following while writing the program:

The possible grades are A, B, C, D, E, and F.
Provide the following feedback corresponding to the grade as follows:
A: Excellent! Keep it up.
B: Very good! Keep it up.
C: Good! Try improving in the next exam.
D: Average! Need to work hard.
E: Poor! Need a lot of hard work.
F: Failed! You need to attend special classes after school.
Allow users to input grade.
Consider how your program should behave if the user enters an invalid grade.
Use the switch case statement.
*/
#include <stdio.h>
int main()
{
    char Grade;
    printf("Enter the Grade:\n");
    scanf("%c",&Grade);
    switch (Grade) {
        case 'A':
            printf("Excellent! Keep it up.");
            break;
        case 'B':
            printf("Very good! Keep it up.");
            break;
        case 'C':
            printf("Good! Try improving in the next exam.");
            break;
        case 'D':
            printf("Average! Need to work hard.");
            break;
        case 'E':
            printf("Poor! Need a lot of hard work.");
            break;
        case 'F':
            printf("Failed! You need to attend special classes after school.");
            break;
    }
    return 0;
}