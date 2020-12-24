//Chake whether number is multiple of 7.
#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	if(n%7==0)
		printf("Number is multiple of 7");
	else
	{
		printf("Number is not multiple of 7");
	}
	return 0;
}