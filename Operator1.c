// Operator || OR &&  AND
// Created by KUNTAL OJHA RAJ on 7/4/2020.
#include <stdio.h>
int main()
{
    int x=20,y=40,z=45;
    if (x>y&&x>z)
        printf("Biggest number is X=%d\n",x);
    else if (y>x&&y>z)
        printf("Biggest number is Y=%d\n",y);
    else if (z>x&&z>y)
        printf("Biggest number is Z=%d\n",z);
    return 0;
}