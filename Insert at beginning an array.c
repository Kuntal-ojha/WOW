#include <stdio.h>
int insert_beg(int*arr)
{
	int i, item;
	printf("Enter the value to insert:");
	scanf("%d",&item);
	for(i=4;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=item;
	for(i=0;i<6;i++)
		printf("%d",arr[i]);
	return 0;
}
int main(int argc, char** argv)
{
	int arr[10],i;
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	insert_beg(arr);
	return 0;
}