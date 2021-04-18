// Write a program to insert an element at the end of the array.
#include <stdio.h>
int insert_end(int *arr)
{
	int i,item;
	printf("Enter the item :");
	scanf("%d",&item);
	arr[4]=item;
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
	insert_end(arr);
	return 0;
}