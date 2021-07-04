// One more example of Calling function.
// Created by kuntal on 29-06-2021.
#include <stdio.h>
void fun();
int main()
{
    int a=30;
    fun();
    printf("a=%d\n",a);
    return 0;
}
void fun()
{
   int b=60;
    printf("b=%d\n",b);
}

