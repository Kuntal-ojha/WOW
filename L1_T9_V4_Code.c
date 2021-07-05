// Created by kuntal on 05-07-2021.
// Coding Challenge
/*
Write a program to find out the grade of a student based on the marks secured in the exam.
Consider the following while writing the program:

Maximum marks that can be secured by a student is 500
If marks secured by the student is :
Greater than or equal to 450 and less than or equal to 500: ‘A’ grade
Greater than or equal to 400 and below 450: ‘B’ grade
Greater than or equal to 350 and below 400: ‘C’ grade
Greater than or equal to 250 and below 350: ‘D’ grade
Greater than or equal to 150 and below 250: ‘E’ grade
Less than 150: ‘F’ grade
Allow user to input his total marks secured out of 500
Consider how your program should behave if the user enters a negative number or enters marks above 500
Use else-if ladder statements
 */
#include <stdio.h>
int main()
{
    int marks;
    printf("Please enter your marks:\n");
    scanf("%d",&marks);
    if(marks>=450 && marks<500)
    {
        printf("A Grade");
    } else if(marks>=400 && marks<450){
        printf("B Grade");
    } else if(marks>=350 && marks<400){
        printf("C Grade");
    } else if(marks>=250 && marks<350){
        printf("D Grade");
    } else if(marks>=150 && marks<250){
        printf("E Grade");
    } else
        printf("F Grade");
    return 0;
}
