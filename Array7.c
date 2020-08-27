//  Use of malloc()
// Created by KUNTAL OJHA RAJ on 8/10/2020.
// One more Example of Array use malloc()
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max,i,*p;
    printf("Enter array size:\n");
    scanf("%d",&max);
    p=(int*)malloc(max *sizeof(int));
    for (i=0;i<=10;i++)
    {
        p[i]=i*i;
        printf("%d\n",p[i]);
    }
    return 0;
}
