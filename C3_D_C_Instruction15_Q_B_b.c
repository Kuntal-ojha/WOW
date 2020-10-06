// [B] Point out the errors, if any, in the following program.
// Created by KUNTAL OJHA RAJ on 9/27/2020.
// Good Question.
#include <stdio.h>
int main()
{
    int j=10,k=12;
    if (k>=j)
    {
        printf("1.j=%d\n1.k=%d\n",j,k);
        {
            k=j;
            j=k;
            printf("\n2.j=%d\n2.k=%d\n",j,k);
        }
        printf("\n3.j=%d\n3.k=%d\n",j,k);
    }
    printf("\n4.j=%d\n4.k=%d\n",j,k);
    return 0;
}
