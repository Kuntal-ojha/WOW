#include <stdio.h>
int main(int argc, char** argv)
{
	int p,n;
	float r,si;
	p=1000;
	n=3;
	r=8.5;
	si=p*n*r/100;
	//printf("%f",si);
	//printf("%d%d%f%f",p,n,r,si);
	//printf("Simple interest=Rs:%f",si);
	printf("Principal=%d\nRate=%f",p,r);
	return 0;
}