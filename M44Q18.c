//Chake whether number is divisible by 5.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	if(n%5==0)
		printf("Number is divisible by 5.");
	else 
		printf("Number is not divisible by 5.");
	return 0;
}