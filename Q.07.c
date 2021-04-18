//Create a linked list of the series: 0,1,2,3,4.
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}node;
int main(int argc, char** argv)
{
	node *struct, *temp, *new;
	int i;
	for(i=0;i<5;i++)
	{
		new=(node*)malloc(sizeof(node));
		new->data=i;
		new->next=NULL;
		if(struct==NULL)
		{
			struct=new;
		}
	}
	else
	{
		temp=start;
	}
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new;
	while(temp!=NULL)
	{
		printf("%d-",temp->data);
		temp=temp->next;
		
	}
	return 0;
}