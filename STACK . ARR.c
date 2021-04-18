#include <stdio.h>
#define MAX 3
int top=-1;
void push(int arr[],int item)
{
	if(top==MAX-1)
		printf("Overflow-->");
	else
	{
		top=top+1;
		arr[top]=item;
	}
}
int pop(int arr[])
{
	int item;
	if(top==-1)
		printf("Underflow-->");
	else
	{
		item=arr[top];
		top=top-1;
		return item;
	}
}
int main()
{
	int arr[MAX];
	int i,item;
	push(arr,10);
	push(arr,20);
	push(arr,30);
	printf("After After pushing all the elements:");
	for(i=0;i<=top;i++)
		printf("%d->",arr[i]);
	item=pop(arr);
	printf("\npopped item is:%d",item);
	printf("\nAfter Popping Modified Stack is:");
	for(i=0;i<=top;i++)
		printf("%d->",arr[i]);
	return 0;
}