// One more Example use of extern int .
// Created by KUNTAL OJHA RAJ on 8/3/2020.
// Very good Question
#include <stdio.h>
int main()
{
    int x=20;
    {
        extern int x;
        printf("1.x=%d\n",x);
    }
    // extern int x; // if ues hear extern int it could not work.
    printf("2.x=%d\n",x);
    return 0;
}
int x=10;