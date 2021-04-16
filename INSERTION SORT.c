//INSERTION SORT
#include<stdio.h>
int main()
{
	int A[100],n,i,j,temp;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	for(i=1;i<n;i++)
	{
		temp=A[i];
		for(j=i-1;temp<A[j]&&j>=0;j--)
			A[j+1]=A[j];
		    A[j+1]=temp;
	}
	printf("\n\t THE ASCENDING ORDER LIST IS....:\n");
	for(i=0;i<n;i++)
		printf("\n\t%d",A[i]);
	return 0;
}