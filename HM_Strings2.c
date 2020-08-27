// This Program Can't Work
// Created by KUNTAL OJHA RAJ on 8/26/2020.
// This is the Limitation of Array of Pointers to Strings.
#include <stdio.h>
int main()
{
    char *names[6];
    int i;
    for(i=0;i<=5;i++)
    {
        printf("Enter name:\n");
        scanf("%s",names[i]);
    }
    return 0;
}
