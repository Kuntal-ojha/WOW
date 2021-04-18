#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
}node;
int main()
{
    node *start=NULL,*new,*temp;
    int i,num,loc;
    for(i=1;i<=10;i++)
    {
        new=(node*)malloc(sizeof(node));
        new->a=i;
        new->next=NULL;
           if(start==NULL)
              start=new;
           else
           {
               temp=start;
               while(temp->next!=NULL)
                temp=temp->next;
               temp->next=new;
           }
    }
//Entering Location and Inserting Number
  printf("Enter the Location where you want to insert : ");
  scanf("%d",&loc);
  printf("Enter the number which you want to insert : ");
  scanf("%d",&num);

  //Reaching up to located node
  temp=start;
  for(i=1;i<loc;i++)
    temp=temp->next;

  //Creating and inserting a new node of the given number
  new=(node*)malloc(sizeof(node));
  new->a=num;
  new->next=temp->next;
  temp->next=new;

  //Displaying the Modified List
  temp=start;
  while(temp!=NULL)
  {
      printf("%d->",temp->a);
      temp=temp->next;
  }
  return 0;
}
