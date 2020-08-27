//
// Created by KUNTAL OJHA RAJ on 7/8/2020.
//
#include <stdio.h>
int main ()
{
    char a,b,c,d,f,g,h,j,k;
    //,g,h,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z
    //%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c
    //,h,j,k,l,m,o,p,q,r,s,t,u,v,w,x,y,z
    //&h,&j,&k,&l,&m,&n,&o,&p,&q,&r,&s,&t,&u,&v,&w,&x,&y,&z
    int i=1;
    printf("Enter what you want to print:\n");
    scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&f,&g,&h,&j,&k);
    while (i>0)
    {
        printf("%d %c%c%c%c%c%c%c\n",i,a,b,c,d,f,g,h,j,k);
        i++;
    }
}