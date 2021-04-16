#include<stdio.h>
#include<stdlib.h>
int item;
void QInsert();
void QDelete();
void traverse();
struct Node
{
  int data;
  struct Node *next;
}*front = NULL,*rear = NULL;
int main()
{
   int choice;
   char ch;
   do
    {
      printf("\n1.QInsert");
      printf("\n2.QDelete");
      printf("\n3.TRAVERSE");
      printf("\n4.EXIT");
      printf("\n5.Enter your choice");
      scanf("%d",&choice);
   switch(choice)
      {
        case 1: QInsert();
          break;
        case 2: QDelete();
          break;
        case 3: traverse();
          break;
        case 4: exit(0);
      }
   }
   while(choice!=4);
}
void QInsert()
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   printf("Enter the value : ");
    scanf("%d",&item);
   newNode->data = item;
   newNode -> next = NULL;
   if(front == NULL)
   front = rear = newNode;
  else{
     rear -> next = newNode;
     rear = newNode;
      }
  printf("\nInsertion is Success!!!\n");
}
void QDelete()
{
   if(front == NULL)
      printf("\nQueue is Empty!!!\n");
   else{
       struct Node *temp = front;
       front = front -> next;
        printf("\nDeleted element: %d\n", temp->data);
        free(temp);
        }
}
void traverse()
{
	if(front==NULL)
		printf("\nQueue is empty!!\n");
	else
	{
		struct Node*temp=front;
		while(temp->next !=NULL)
		{
			printf("%d--->",temp->data);
			temp = temp -> next;
		}
		printf("%d--->NULL\n",temp->data);
	}
}       