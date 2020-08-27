// Use of global Variable.
// Created by KUNTAL OJHA RAJ on 8/3/2020.
// Very Interesting Program.
#include<stdio.h>
int i=0;
void val();
int main()
{
    printf("1.main's i=%d\n",i);
    i++;
    val();
    printf("2.main's i=%d\n",i);
    val();
    return 0;
}
void val()
{
    i=100;
    printf("val's i=%d\n",i);
    i++;
}
