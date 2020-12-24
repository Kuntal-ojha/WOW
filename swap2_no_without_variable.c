#include <stdio.h>
int main() {
int a,b;
printf ("Enter the First value A=");
scanf("%d",&a);
printf ("Enter the Secound value B=");
scanf ("%d",&b);
printf("Your Valu is A=%d\n",a);
printf("Your Valu is B=%d\n",b);
a=a+b;
b=a-b;
a=a-b;
printf("Now A=%d\n",a);
printf("Now B=%d",b);
    return 0;
}