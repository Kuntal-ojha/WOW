/*Calculation of somple interest*/
/*Author: Kuntal Ojha. Date:14-02-2020*/
#include <stdio.h>
int main(int argc, char** argv)
{
	int p,n;
	float r,si;
	p=1000;
	n=3;
	r=8.5;
	// Formula for simple interesy
	si=p*n*r/100;
	printf("%f\n",si);
	return 0;
}