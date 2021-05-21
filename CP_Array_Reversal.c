// Array Reversal Link: https://www.hackerrank.com/challenges/reverse-array-c/problem?h_r=next-challenge&h_v=zen
// Created by kuntal on 20-05-2021.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    /* Write the logic to reverse the array. */
    for(i = num; i >=0 ; i--)
    {
        if (i==num)
            i=num-1;
        printf("%d ", *(arr + i));
    }
    return 0;
}
