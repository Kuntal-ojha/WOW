// sum=1+2+3+4....(n-1); i don't know this Q wright or wrong.
// Created by KUNTAL OJHA RAJ on 7/31/2020.
// T(5)=T(4)+5
#include <stdio.h>
int T(int n)
{
    if (n==0)
        return 1;
    else
    {
        return T(n-1)+n;
    }
    // T(5)=T(5-1)+5=T(4)+5
    // T(4)=T(4-1)+4=T(3)+4
    // T(3)=T(3-1)+3=T(2)+3
    // T(2)=T(2-1)+2=T(1)+2
    // T(1)=T(1-1)+1=T(0)+1

}
int main()
{
    // T(0)=1
    // T(1)=T(0)+1=1+1=2
    // T(2)=T(1)+2=2+2=4
    // T(3)=T(2)+3=4+3=7
    // T(4)=T(3)+4=7+4=11
    // T(5)=T(4)+5=11+5=16
    // SO OutPut is =16
    printf("%d",T(5));
}

