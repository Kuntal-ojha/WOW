// Use of Nwe Function sprintf()
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// One more Example of Input/Output
#include <stdio.h>
int main()
{
    int i=10;
    char ch='A';
    float a=3.14;
    char str[20];
    printf("\nprintf=%d %c %f\n",i,ch,a);
    sprintf(str,"\nsprintf=%d %c %f\n",i,ch,a);
    printf("\nstr=%s\n",str);
}
