#include <stdio.h>
int main(int argc, char** argv)
{
	float a,b,c,d,e,f,g,h,i,j,k;
	printf("\nEnter the value of cm:\n");
	scanf("%f",&i);
	a=i/100000;
	printf("\nThis value is km:%f\n",a);
	b=i/100; 
	printf("\nThis value is m:%f\n",b);
	c=i/10;
	printf("\nThis value is dm:%f\n",c);
	d=i*10;
	printf("\nThis valie is mm:%f\n",d);
	e=i*1000;
	printf("\nThis value is um:%f\n",e);
	f=i*10000000;
	printf("\nThis value is nm:%f\n",f);
	g=i*10000000000;
	printf("\nThis value is pm:%f\n",g);
	h=i*5.39956803e-6;
	printf("\nThis value is nmi:%f\n",h);
	k=i*6.213771192e-6;
	printf("\nThis value is mi:%f\n",i);
	j=i*4.97096954e-5;
	printf("\nthis value is fur:%f\n",j);
	return 0;
}