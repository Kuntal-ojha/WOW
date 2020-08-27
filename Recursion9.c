// Display (Any Number) to 1 using recursive.
// Created by KUNTAL OJHA RAJ on 8/1/2020.
// One more example in recursion.
#include <stdio.h>
int T(int n)
{
    printf("%d\n",n);
    if (n>1)
        T(n-1);
}
int main()
{
    int i;
    printf("Enter number For Display (Any Number) to 1)\n");
    scanf("%d",&i);
    printf("Now display %d to 1\n",i);
    T(i);
}
