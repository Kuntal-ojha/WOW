//
// Created by KUNTAL OJHA RAJ on 1/2/2021.
//
#include <stdio.h>
int main()
{    int i,j=1;
    for ( i = 1; i<5||j<11 ; ++i && j++) {
        if (i<5)
        printf("1.Print number %d\n",i);
        else if (j<11)
            printf("2.Print number %d\n",j);
    }
}

