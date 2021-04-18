// [E] Attempt the following
// (e) Rewrite the following program using conditional operators
/*
#include <stdio.h>
int main()
{
    float sal;
    printf("Enter the salary:\n");
    scanf("%d",&sal);
    if (sal>=2500 && sal<=40000)
        printf("Manager\n");
    else
        if (sal>=15000 && sal<25000)
            printf("Accountant\n");
        else
            printf("Clerk\n");
    return 0;
}
*/
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main()
{
    float sal;
    printf("Enter the salary:\n");
    scanf("%d",&sal);
    (sal>=2500 && sal<=40000)?printf("Manager\n"):
    (sal>=15000 && sal<25000)? printf("Accountant\n"):
    printf("Clerk\n");
    return 0;
}
