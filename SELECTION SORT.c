//SELECTION SORT
#include<stdio.h>
int main ()
{
	int A[100],n,i,j,min,temp,p;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=0;i<n;i++)
	{
		p=i;
		min=A[i];
		for(j=i+1;j<n;j++)
		{
			if(min>A[j])
			{
				min=A[j];
				p=j;
			}
		}
		temp=A[i];
		A[i]=A[p];
		A[p]=temp;
	}
	printf("\n THE SORTED ELEMENT IN ASCINDING ORDER: ");
	for(i=0;i<n;i++)
	{
		printf("\n\t%d",A[i]);
	}
	return 0;
}