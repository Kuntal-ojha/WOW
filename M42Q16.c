//Chake whether number is greater then or less than 10
#include <stdio.h>
int main(int argc, char** argv)
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	if(n>10)
		printf("Number is greater than 10");
	else if (n<10)
		printf("Number is lesser than 10");
	else 
		printf("Number is 10");
	return 0;
}