// Multiplication Table 0 to 20 
// Created by KUNTAL OJHA RAJ on 2/9/2021.
// Very Simple program.
#include <stdio.h>
#include <conio.h>
int main()
{
    for (int i = 0; i <=20; ++i) {
        for (int j = 0; j <= 10; ++j) {
            int Total;
            Total=i*j;
            printf("%d * %d =%d\n",i,j,Total);
        }
        printf("\n\n");
    }
}

