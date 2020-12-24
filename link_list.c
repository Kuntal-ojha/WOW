#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int main()
{
	typedef struct node NODE;
	NODE *head, *first=NULL, *temp=NULL, *n;
	int count=0;
	int choice=0;
	while(choice)
	{
	head=(NODE*)malloc(sizeof(NODE));
	printf("Enter the data item\n");
	scanf("%d",&head-> data);
	if(first !=NULL)
	{
		temp->next=head;
		temp=head;
	}	
	else
	{
		first =temp =head;
	}
	printf("Do you want to continue (type 0 or 1)?\n");
	scanf("%d",&choice);
	}
}