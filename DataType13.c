// Exercise Number [A] (b)
// Created by KUNTAL OJHA RAJ on 8/3/2020.
// One more Example static int.
#include<stdio.h>
int main()
{
    static int count =5;
    printf("count=%d\n",count--);
    if (count!=0)
        main();
    return 0;
}
