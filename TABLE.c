#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,c,d;
	
	printf("Enter the value of the first table:\n");
	scanf("%d",&a);
	printf("Enter the value of the Secound table:\n");
	scanf("%d",&d);
	printf("\n\tTable of number from %d to %d",a,d);
	do
	{
		for(b=0;b<=10;b++)
		{
			c=b*a;
			printf("\n%d x %d = %d",a,b,c);
		}
		printf("\n");
		a++;
	}
	while(a<=d);
	
	return 0;
}