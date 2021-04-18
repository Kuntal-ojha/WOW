// CP Problem: For Loop in C
// Created by KUNTAL OJHA RAJ on 4/7/2021.
// Website Link: https://www.hackerrank.com/challenges/for-loop-in-c/problem
#include <stdio.h>
int main()
{
    int i,j,k,l;
    char number[9][6]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d%d",&j,&k);
    if (k<10)
    {
        for (i=j; i<=k; i++)
            printf("%s\n", number[i - 1]);
    }
    else
    {
        for (i=j; i<=9; i++)
            printf("%s\n", number[i - 1]);
        for (i=10; i<=k; i++)
        {
            if (i%2==0)
                printf("even\n");
            else
                printf("odd\n");
        }
    }
}
