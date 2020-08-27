// Prime Number.
// Created by KUNTAL OJHA RAJ on 7/9/2020.
// 0 to any range prime number .
#include<stdio.h>
int main()
{
    int i;
    for (int num = 0; num <=100; ++num)
    {
        i=2;
        while (i<=num-1)
        {
            if (num%i==0)
            {
                printf("%d Not a Prime number.\n",num);
                break;
            }
            i++;
        }
        if (i==num)
            printf("%d Prime number.\n",num);
    }
    return 0;
}
