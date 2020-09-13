// C Instructions Chapter:02
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Very Simple Question.
#include <stdio.h>
int main()
{
    float a=1.5,b=a+3.1; // This one is Right.
    /*
     * float b=a+3.1,a=1.5;
     * This one is Wrong Because here we are trying
     * to use the variable a Before DEFINING it
     */
    printf("%f %f",a,b);

}
