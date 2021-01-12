// Example of While loop.
// Created by KUNTAL OJHA RAJ on 1/12/2021.
//
include <stdio.h>
int main()
{
    int i,b;
    printf("Enter starting number:\n");
    scanf("%d",&i);
    printf("Enter end number:\n");
    scanf("%d",&b);
    while(i>=b)
    {
        printf("number=%d\n",i);
        i--;
    }
    return 0;
}
