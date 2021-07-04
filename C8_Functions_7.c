// Return type function.
// Created by kuntal on 29-06-2021.
#include <stdio.h>
float square(float );
int main()
{
    float a,b;
    printf("Enter any number:\n");
    scanf("%f",&a);
    b= square(a);
    printf("Square of %f is %f\n",a,b);
    return 0;
}
float square(float x)
{
    float y;
    y=x*x;
    return(y);
}

