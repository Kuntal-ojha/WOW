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
    int i;
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
    //Deletion at Beginning process
    temp=start;
    start=start->next;
    free(temp);

    //Printing the modified Link List
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
