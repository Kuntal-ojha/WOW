#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,item;
int Q[5];
void QInsert();
void QDelete();
void traverse();
int main()
{
    int choice;
    char ch;
    do
      { printf("\n1.PUSH");
        printf("\n2.POP");
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
   if(rear<4)
    {
      printf("Enter the value : ");
      scanf("%d",&item);
      if(rear==-1)
       {
          front=0;
          rear=0;
        }
       else
        {
          rear=rear+1;
         }
          Q[rear]=item;
       }
       else
        {
          printf("The queue is overflow");
        }
}
void QDelete()
{
   if(front==-1)
     {
         printf("The queue is underflow");
	 }
	 else
	 {
	 	printf("The deleted item is:%d",Q[front]);
	 	if(front==rear)
		 {
		 	front=-1;
		 	rear=-1;
		 }
		 else
		 {
		 	front=front+1;
		 }
	 }
}
void traverse()
{
	int i;
	if(front==-1)
	{
		printf("\nThe queue is empty");
	}
	else
	{
		printf("\nThe values are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",Q[i]);
		}
	}
}	 