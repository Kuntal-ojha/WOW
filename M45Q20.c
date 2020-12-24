//Compare two numbers
#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	printf("Enter number:a=");
	scanf("%d",&a);
	printf("Enter number:b=");
	scanf("%d",&b);
	if(a>b)
		printf("\na is greater than b");
	else if(b>a)
		printf("\nb is  greater than a");
	else 
		printf("\nboth are equale");
	return 0;
}