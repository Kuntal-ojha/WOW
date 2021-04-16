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
    int i,num;
    for(i=1;i<=5;i++)
    {
        new=(node*)malloc(sizeof(node));
        new->a=i;
        new->next=NULL;
        if(start==NULL)
        {
            start=new;
        }
        else
        {
            temp=start;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=new;
        }
    }
    //Taking a number as input &inserting it at Beginning

    printf("Enter a number which you want to inserting: ");
    scanf("%d",&num);
    new=(node*)malloc(sizeof(node));
         new->a=num;
         new->next=NULL;
         new->next=start;
         start=new;

//Displaying the modified List
      temp=start;
      while(temp!=NULL)
      {
          printf("%d->",temp->a);
          temp=temp->next;
      }
      return 0;
}
