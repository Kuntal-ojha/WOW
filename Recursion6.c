// Display 1 to (Any Number) using recursive.
// Created by KUNTAL OJHA RAJ on 8/1/2020.
// This is one more Example Use recursion.
#include <stdio.h>
int T(int n)
{
    if (n>1)
        T(n-1);
    printf("%d\n",n);
}
int main()
{
    int a;
    //T(5);
    printf("Enter number (Display 1 to which number)\n");
    scanf("%d",&a);
    printf("Now display 1 to %d\n",a);
    T(a);

}

