#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    struct node *prev;
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
        if(start==NULL)
        {
            start=new;
            new->next=NULL;
            new->prev=NULL;
        }
        else
        {
            temp=start;
            while(temp->next!=NULL)
                temp=temp->next;
            new->prev=temp;
            temp->next=new;
            new->next=NULL;
        }
    }
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
