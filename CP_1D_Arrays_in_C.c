// CP 1D Arrays in C Link: https://www.hackerrank.com/challenges/1d-arrays-in-c/problem
// Created by kuntal on 20-05-2021.
#include <stdio.h>
int main() {
    int i=0,j=0,n,sum=0;
    scanf("%d",&n);
    int Array[n];
    while (i<n) {
        scanf("%d",&Array[i]);
        i++;
    }
    for (j; j <n; j++) {
        sum=Array[j]+sum;
    }
    printf("%d",sum);
    return 0;
}

