// Use for loop
// Created by KUNTAL OJHA RAJ on 12/10/2020.
// Simple program.
#include <stdio.h>
int main()
{
    int a,b,rows,columns;
    printf("Enter the value of Rows:\n");
    scanf("%d",&rows);
    printf("Enter the value of Column:\n");
    scanf("%d",&columns);
    for (b=1;b<=columns;b++)
    {
        printf("*");
        for (a=1;a<=rows;a++)
        {
            printf("a");
        }
    }
    return 0;
}
