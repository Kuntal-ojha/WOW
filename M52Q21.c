//Print three number Ascending And Descending order. 
#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,c;
	printf("Enter Number:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>=b)&&(a>=c))
	{
		if(b>=c)
		{
			printf("\nDesending order:%d%d%d",a,b,c);
			printf("\nAscending order:%d%d%d",c,b,a);
		}
		else
		{
			printf("\nDesending order:%d%d%d",a,b,c);
			printf("\nAscending order:%d%d%d",b,c,a);
		}
	}
	else if((b>=a)&&(b>=c))
	{
		if(a>=c)
		{
			printf("\nDesending order:%d%d%d",b,a,c);
			printf("\nAscending order:%d%d%d",c,a,b);
		}
		else
		{
			printf("\nDesending order:%d%d%d",b,c,a);
			printf("\nAscending order:%d%d%d",a,b,c);
		}
	}
	else if((c>=a)&&(c>=b))
	{
		if(a>=b)
		{
			printf("\nDesending order:%d%d%d",c,a,b);
			printf("\nAscending order:%d%d%d",b,a,c);
		}
		else
		{
			printf("\nDescending order:%d%d%d",c,b,a);
			printf("\nAscending order:%d%d%d",a,b,c);
		}
	 }
	return 0;
}