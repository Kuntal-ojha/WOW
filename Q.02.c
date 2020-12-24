//Write a program to insert an element at nth position in an array.
#include <stdio.h>
int insert_n(int *arr)
{
	int i,pos,item;
	printf("Enter the item to insert:");
	scanf("%d",&item);
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=4;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	for(i=0;i<6;i++)
	{
		printf("%d",arr[i]);
	}
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
	insert_n(arr   );
	return 0;
}