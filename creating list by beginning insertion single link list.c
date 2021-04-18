#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int a;
    struct node *next;
}node;
int main()
{
    node *new,*start=NULL,*temp;
    int i;
    for(i=3;i>=1;i--)
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
            new->next=start;
            start=new;
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
