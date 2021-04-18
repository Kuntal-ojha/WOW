#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int a;
  struct node *next;
}node;
int main()
{
    node *start=NULL,*new,*temp,*prev;
    int i,loc;
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
    //Taking location and reaching up to n-th position
    printf("Enter a location: ");
    scanf("%d",&loc);
    temp=start;
    for(i=1;i<loc;i++)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    free(temp);

    //Displaying the Modified Link list
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
