//Write a program to delete an element from the end of erray.
#include <stdio.h>
int del_end(int *arr)
{
	int i;
	arr[5]=NULL;
	for(i=0;i=4;i++)
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
	del_end(arr);
	return 0;
}