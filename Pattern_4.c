// Pattern Making
/*
  ******
   *****
    ****
     ***
      **
       *
 */

#include <stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows");
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
            printf("*");
        }
        m--;
        printf("\n");
    }
    return 0;
}
/*
// Created by kuntal on 23-05-2021.
#include <stdio.h>
int main()
{
    int i,j,k;
    for ( i = 5; i >0 ; i--)
    {
        k=0;
        for ( j = i; j >0 ; j--)
        {

            if(k==1)
            {
                printf("0");
                k++;
            }
            if(k==2)
            {
                printf("00");
                k++;
            }
            if(k==3)
            {
                printf("000");
                k++;
            }
            if(k==4) {
                printf("0000");
                k++;
            }
            if(k==5) {
                printf("00000");
                k++;
            }
            printf("*");
            if(k==0)
                k++;
        }
        printf("\n");
    }
}
#include <stdio.h>
int main()
{
    int i,j,k;
    for ( i = 5; i >0; i--)
    {
        for ( j = i; j > 0 ; j--)
            printf("*",j);
        for (  k=5; k<=5  ;k++)
            printf("0");
     //   printf("%d%d%d ",i,j,k);
        printf("\n");
    }
}
*/
