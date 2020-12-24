//Chake whther number is positive or negative 
#include<stdio.h>
int main(int argc, char** argv)
{
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	if(n>0)
		printf("Given number %d is positive",n);
	else if(n<0)
		printf("Given number %d is negative",n);
	else
		printf("Given number %d is Zero",n);	    
	return 0;
}