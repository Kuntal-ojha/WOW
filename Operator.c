// Operator || OR &&  AND
// Created by KUNTAL OJHA RAJ on 7/3/2020.
#include <stdio.h>
int main(){
    int i=4,j=-1,k=0,w,x,y,z;
    w=i||j||k;
    if(w==1)
        printf("True  W=%d\n",w);
    else
        printf("False W=%d\n",w);
    x=i&&j&&k;
    if(y==1)
        printf("True X=%d\n",x);
    else
        printf("False X=%d\n",x);
    y=i || j && k;
    if(y==1)
        printf("True  Y=%d\n",y);
    else
        printf("False Y=%d\n",y);
    z=i&&j||k;
    if(y==1)
        printf("True  Z=%d\n",z);
    else
        printf("False Z=%d\n",z);

    return 0;
}