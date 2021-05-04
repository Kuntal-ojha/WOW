// Hear s[i] and *(s+i) and *(i+s) and i[s] all are same
// Created by Kuntal Ojha on 03-05-2021.
// Very conceptual program.
/**
Explanation:
s[i], *(i+s), *(s+i), i[s] are all different ways of expressing the same
idea. Generally array name is the base address for that array. Here s is the base
address. i is the index number/displacement from the base address. So, indicating it
with * is same as s[i]. i[s] may be surprising. But in the case of C it is same as s[i].
 */
#include <stdio.h>
#include <conio.h>
int main()
{
    char s[ ]="man";
    int i;
    for(i=0;s[ i ];i++)
        printf("\n%c%c%c%c",s[ i ],*(s+i),*(i+s),i[s]);
    getch();
}


