// CP Calculate the Nth term
// Created by KUNTAL OJHA RAJ on 4/7/2021.
// Website Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
#include <stdio.h>
// Created by KUNTAL OJHA RAJ on 4/7/2021.
int main()
{
    int ans,s1,s2,s3,s4,s5,n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    s1=a;
    s2=b;
    s3=c;
    s4=s3+s2+s1;
    s5=s4+s3+s2;
    ans=s5;
    printf("%d", ans);
    return 0;
}
