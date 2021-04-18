#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
}node;
int main()
{

    //Creating the Link List
    node *start=NULL,*new,*temp;
    int i,num;
    for(i=0;i<=5;i++)
    {
        new=(node*)malloc(sizeof(node*));
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
    //Displaying the Created link list
          temp=start;
      while(temp!=NULL)
      {
          printf("%d->",temp->a);
          temp=temp->next;
      }
//Creating that node which has to insert in the link list
printf("\nEnter a number which has to be insert at the end of the link list: ");
scanf("%d",&num);
    temp=start;
    new=(node*)malloc(sizeof(node*));
    new->a=num;
    new->next=NULL;

//Inserting the node at the end position
      for(i=0;i<5;i++)
    temp=temp->next;
      temp->next=new;

//Displaying the Modified Link list
        temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
