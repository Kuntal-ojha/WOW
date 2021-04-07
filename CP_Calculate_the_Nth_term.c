// CP Calculate the Nth term
// Created by KUNTAL OJHA RAJ on 4/7/2021.
// Website Link: https://www.hackerrank.com/challenges/recursion-in-c/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    //Write your code here.
    int ans,s1,s2,s3,s4,s5;
    s1=a;
    s2=b;
    s3=c;
    s4=s3+s2+s1;
    s5=s4+s3+s2;
    ans=s5;
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}
