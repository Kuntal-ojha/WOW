//
// Created by kuntal on 05-05-2021.
//
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,j,x1;
    printf("\nEnter the value of X=");
    scanf("%d",&x1);
    float x[]={2,5,7,10,12}, y[]={3,4,8,12,14},s=0,f=1;
    for ( i = 0; i <=4; i++) {
        f=1;
        for ( j = 0; j <=4; j++) {
            if(i!=j)
                f=f*(x1-x[j])/(x[i]-x[j]);
        }
        printf("\n\n %f",f*y[i]);
        s=s+f*y[i];
    }
    printf("\nSo when X=%d, then F(%d)=%f",x1,x1,s);
    getch();
}
