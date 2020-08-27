// First Example of Array.
// Created by KUNTAL OJHA RAJ on 8/6/2020.
// Write a Program to find average marks obtained by a class of 30 students in a test.
#include <stdio.h>
int main()
{
    int avg,sum=0;
    int i;
    int marks[5]; /* Array declaration. It's means 0,1,2,3,4, Total 5. (n-1) */
    for (i = 1; i <=5 ; i++) {
        printf("%d Enter Marks:\n",i);
        scanf("%d",&marks[i]); /* Store data in Array. */
    }
    for (i = 1; i <=5 ; i++)
        sum=sum+marks[i]; /* Read Data from an Array. */
        avg=sum/5;
        printf("Average marks=%d",avg);

    return 0;
}

