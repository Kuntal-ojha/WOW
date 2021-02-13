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
    /*
    int k,l,m;
    for (int i = 1; i <=500 ; i++)
    {
        for(int j=1;j<=3;j++)
        {
            k=i%10;
            l=k*k*k;
            m=l+l;
            if (m==i)
            {
                printf("%d\n",m);
            }
        }
    }
     */
    int a=153;
    int x,y,z;
    {
        for (int i = 0; i <3 ; ++i) {
            x=a%10;
            y=x*x*x;
            z+=y;
            printf("%d",z);
        }
    }


}