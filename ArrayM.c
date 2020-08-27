// Example of Two-Dimensional Array or MATRIX.
// Created by KUNTAL OJHA RAJ on 8/10/2020.
// This is Multidimensional Array Example.
#include <stdio.h>
int main()
{
    int stud[4][2];
    int i;
    for (i=0;i<=3;i++)
    {
        printf("Enter Roll Number & Marks:\n");
        scanf("%d%d",&stud[i][0],&stud[i][1]);
    }
    for (i=0;i<=3;i++)
        printf("%d %d\n",stud[i][0],stud[i][1]);
    return 0;
}

