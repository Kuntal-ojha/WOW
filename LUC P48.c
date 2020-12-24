#include <stdio.h>
int main ()
{
	int i;
	printf("Enter value of i:\n");
	scanf("%d",&i);
	if(i==5)// if we yse (i=5) then the outout is wrong becouse 
		// i=5 , here = is the assignment operator and 
	//i==5,here == is the equale operator.
		printf("You Enter 5");
	else
	{
		printf("You Entered something other then 5\n");
	}
}