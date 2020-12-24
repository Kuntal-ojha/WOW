//write a program to delete an element form the beginning of array. 
#include <stdint.h>
int del_beg(int *arr)
{
	int i;
	for(i=0;i<5;i++)
	{
		arr[i]=arr[i+1];
	}
	for(i=0;i<4;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
int main(int argc, char** argv)
{
	int i, arr[10];
	printf("Enter the array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	del_beg(arr);
	return 0;
}