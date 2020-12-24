//Chake Whether number is even or odd 
#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n%2==0)
		printf("Number is even");
	else
	{
		printf("Number is odd");
	}
	return 0;
}