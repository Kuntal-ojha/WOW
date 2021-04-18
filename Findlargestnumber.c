//Find largest of two numbers
#include<stdio.h>
int main(int argc, char** argv)
{
	int a,b;
	printf("Enter Number:");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("Largest value is:%d",a);
	else
	{
		printf("Largest value is:%d",b);
	}	
	return 0;
}