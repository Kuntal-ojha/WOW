//
// Created by KUNTAL OJHA RAJ on 8/26/2020.
//
#include <stdio.h>
int main()
{
    char *names[]={
            "akshay",
            "param",
            "raman",
            "srinivas",
            "gopal",
            "rajesh"
    };
    char *temp;
    printf("Original: %s %s\n",names[2],names[3]);
    temp=names[2];
    names[2]=names[3];
    names[3]=temp;
    printf("New: %s %s\n",names[2],names[3]);
    return 0;
}
