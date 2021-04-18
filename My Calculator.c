#include <stdio.h>
int main(int argc, char** argv)
{
/*	float  a,b,c,d,e,f,g,h,x=1,k; */
	int i,j,l;
	/*
	printf("Enter  the first number:\n");
	scanf("%f",&a);
	printf("Enter the secound number:\n");
	scanf("%f",&b);
	c=a+b;
	printf("Addation of two number:%f\n",c);
	d=a-b;
	printf("\nSubstraction of two number:%f\n",d);
	e=a*b;
	printf("\nMultifikation of two number:%f\n",e);
	f=a/b;
	printf("\nDivition of two number:%f\n",f);
	g=a*a;
	printf("\nThe square of first numner:%f\n",g);
	h=a/100;
	printf("\nparsentage of first number:%f\n",h);
	for(k=0;k<5;k++)
		x=x-(x*x-a)/(2*x);
printf("\nThe square rout of the first number:%f\n",x); */
	printf("\nEnter the date of barth in this formate (mm/dd/yyyy:)\n");
	
    printf("\nEnter your dath of birth month:\n");
    scanf("%d",&i);
	if(i<=12)
	{
		printf("\nEnter your dath of barth month:\n");
	}
    else
	{
		if(i<=99)
	printf("\nPlease Enter your dath of birth month: Not day\n");
     else
        {
	printf("\nPlease enter your dath of birth month: Not yers\n");
        }
	printf("\nEnter your dath of barth month:\n");
	scanf("%d",&i);
	}
	printf("Enter your dath of birth day:");
    scanf("%d",&j);
    printf("Enter your dath of birth year:");
    scanf("%d",&l);
    printf("Your dath of barth is :%d/%d/%d",i,j,l);
		return 0;
}