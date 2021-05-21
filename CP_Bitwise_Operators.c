// Bitwise Operators Links: https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem
// Created by kuntal on 21-05-2021.
#include <stdio.h>
void calculate_the_maximum(int n, int k) {
    //Write your code here.

    int MaxAnd=0,MaxOr=0,MaxXor=0;

    for (int i=1; i<=n; i++) {
        for (int j=i+1; j<=n; j++)
        {
            if ((i&j)<k && MaxAnd<(i&j))
            {
                MaxAnd=i&j;
            }
            if ((i|j)<k && MaxOr<(i|j))
            {
                MaxOr=i|j;
            }
            if ((i^j)<k && MaxXor<(i^j))
            {
                MaxXor=i^j;
            }
        }
    }
    printf("%d\n%d\n%d\n",MaxAnd,MaxOr,MaxXor);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}


