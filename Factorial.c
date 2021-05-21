// Simple Example of Factorial
// Created by kuntal on 18-05-2021.
#include <stdio.h>
int main()
{
    int factorial=1,n,i;
    printf("Enter the number i will give the factorial of this number:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n ; ++i) {
        printf("%d\n",i);
        factorial *=i;
    }
    printf("Number is %d and the factorial is %d",n,factorial);
    return 0;
}

