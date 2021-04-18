//Calculate discriminant to identify root of a quadratic equation.
#include<stdio.h>
int main(int argc, char** argv)
{
	float a,b,c,x,r1,r2;
	printf("Enter a,c,c...");
	scanf("%f%f%f",&a,&b,&c);
	x=b*b-4*a*c;
	r1=(-b+x)/2*a;
	r2=(-b-x)/2*a;
	if(x>0)
		printf("\nRoots are unequal...\n");
	else if(x<0)
		printf("\nRoots are imaginary...\n");
	else 
		printf("\nRoots are same...\n");
	printf("R1=%f\n",r1);
	printf("R2=%f",r2);
	return 0;
}