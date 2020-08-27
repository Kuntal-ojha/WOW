// Use operator ? and :
// Created by KUNTAL OJHA RAJ on 7/4/2020.
// Expression1 ? Expression2 : Expression3
// When Expression1 is thue (Value is NON-ZERO) Then the Value return will be Expression2  Otherwise Expression3 will returned.
#include <stdio.h>
int main()
{
    /*
    int i=-4,j,num;
    j=(num<0?0:num*num);
    printf("%d\n",j);
    return 0; */
    int k,num=30;
    k=(num>5?(num<=10?100:200):500);
    printf("%d\n",num);
    printf("%d\n",k);
}
