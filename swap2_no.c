#include <stdio.h>
int main(int argc, char** argv)
{
	int a,b,temp;
	printf("Enter Numbers:");
	scanf("%d%d",&a,&b);
	printf("\nBefore Sweapping...\na=%d\nb=%d\n ",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter Sweapping...\na=%d\nb=%d",a,b);
	getch();	
	return 0;
}