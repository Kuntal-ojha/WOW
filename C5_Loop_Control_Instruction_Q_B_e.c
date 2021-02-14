// [B] Attempt the following :
// Created by KUNTAL OJHA RAJ on 2/11/2021.
// Question (e)
/*
 * Write a program to print out all the Armstrong number between
 * 1 to 500. If sum of cubes of each digits of number is equal
 * to the number itself, then the number is called an Armstrong
 * number. For Example 153=(1*1*1)+(5*5*5)+(3*3*3).
 */
#include <stdio.h>
int main()
{
    int i=153;
    int a,b,c,d;
    printf("%d\n",i);
    a=i%10;
    printf("%d\n",a);
    i=i/10;
    printf("%d\n",i);
    b=i%10;
    printf("%d\n",b);
    i=i/10;
    printf("%d\n",i);

}
/*
 * #include <stdio.h>
int main()
{
    int  j,k,l,m,n,o,p;
    for (int i = 1; i < 10; ++i) {
        k=i%10;
        l=k*k*k;
        if (i==l)
        {
            printf("The Armstrong number is %d\n",i);
            continue;
        }
    }
    for (int i = 10; i < 100; ++i) {
        k=i%10;
        l=k;
        k=i%10;
        n=k;
        p=l+n;
        if (i==p)
        {
            printf("The Armstrong number is %d\n",i);
            continue;
        }
    }
    for (int i = 101; i < 500; ++i) {
        k=i%10;
        l=k;
        k=i%10;
        n=k;
        k=i%10;
        m=k;
        p=l+n+m;
        if (i==p)
        {
            printf("The Armstrong number is %d\n",i);
            continue;
        }
    }

}
/*
 * {
    int k,l,m,sum;
    for (int i = 1; i <501 ; i++)
    {
        for (int j = 1; j <=3; ++j)
        {

        }
        /*
        {
            if (i<10)
            {
                k=i%10;
                l=k*k*k;
                if (i==l)
                {
                    printf("The Armstrong number is %d\n",i);
                    break;
                }
            } else if (i<100)
            {
                k=i%10;
                l=k*k*k;
                i=i/10;
                k=i%10;
                m=k*k*k;
                sum=l+m;
                if (i==sum)
                {
                    printf("The Armstrong number is %d\n",i);
                    break;
                }
            }
}
return 0;
}
 */