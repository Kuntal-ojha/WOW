// BUBBLE SORT
#include<stdio.h>
int main()
{
	int A[100],n,i,j,temp,k,p=1;
	printf("\n Enter the number of elements: ");
	scanf("%d",&n);
	printf("\n Enter %d Elements: ",n);
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	for(i=0;i<n&&p;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			p=0;
			  if(A[j]>A[j+1])
			  {
			  	int temp=A[j];
			  	    A[j]=A[j+1];
			  	    A[j+1]=temp;
			  	    p=1;
			  }
		for(k=0;k<n&&p;k++)
			printf("%d ",A[k]);
		printf("\n\n");
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
	return 0;
}