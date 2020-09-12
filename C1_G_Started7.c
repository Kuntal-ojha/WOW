//  Exercise [F] (c)
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// If the marks obtained by a student in five different subject are input through the keyboard,
// write a program to find out the aggregate marks obtained by the students.
// Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("\nEnter marks in 5 Subjects:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggr=m1+m2+m3+m4+m5;
    per=aggr/5;
    printf("Aggregate Marks=%d\n",aggr);
    printf("Percentage Marks=%f\n",per);
    return 0;
}

