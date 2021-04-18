//Write a program to delete an element at nth position in an array.
#include <stdio.h>
int del_n(int *arr)
{
	int i,pos;
	printf("Enter the position:");
	scanf("%d",&pos);
	for(i=pos-1;i<4;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);
	}
}
int main(int argc, char** argv)
{
	int arr[10],i;
	printf("Enter the array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	del_n(arr);
	return 0;
}