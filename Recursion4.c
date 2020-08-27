// sum=1+2+3+4+5......n
// Created by KUNTAL OJHA RAJ on 7/31/2020.
// Question: T(5)=T(4)+5
#include <stdio.h>
int T(int n)
{
    if (n==1)
        return 1;
    else
    {
        return(T(n-1)+n);
    }
    // T(5)=T(5-1)+5=T(4)+5
    // T(4)=T(4-1)+4=T(3)+4
    // T(3)=T(3-1)+3=T(2)+3
    // T(2)=T(2-1)+2=T(1)+2
    // T(1)=1
}
int main()
{
    // T(1)=1
    // T(2)=T(1)+2=1+1=3
    // T(3)=T(2)+3=3+3=6
    // T(4)=T(3)+4=6+4=10
    // T(5)=T(4)+5=10+5=15
    // SO OutPut is =15
    printf("%d",T(5));
}
/* Or you can use this methode.
#include <stdio.h>>
int T(int);
int main()
{
    printf("%d",T(5));
}
int T(int n)
{
    if (n==1)
        return 1;
    else
    {
        return(T(n-1)+n);
    }
}
*/