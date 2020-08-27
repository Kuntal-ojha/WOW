//
// Created by KUNTAL OJHA RAJ on 6/26/2020.
// Method-01
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in 5 Sunject:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)*100/500;
    if (per>=60)
        printf("First division\n");
    else
    {
        if (per>=50)
            printf("Secound division\n");
        else
        {
            if (per>=40)
                printf("Third division\n");
            else
                printf("FAIL.\n");
        }
    }
    return 0;
}

//  Method-02
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in Five Subject:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/500*100;

    if (per>=60)
        printf("First division\n");
    if ((per>=50) && (per<60))
        printf("Secound division\n");
    if ((per>=40)&&(per<50))
        printf("Third division\n");
    if (per<40)
        printf("FAIL\n");
    return 0;
}

// Method-03
#include <stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter marks in Five Subject:\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    per=(m1+m2+m3+m4+m5)/500*100;
    // else if ladder demo
    if (per>=60)
        printf("First division\n");
    else if (per>=50)
        printf("Secound division\n");
    else if (per>=40)
        printf("Third division\n");
    else
        printf("FAIL\n");
    return 0;
}
        i