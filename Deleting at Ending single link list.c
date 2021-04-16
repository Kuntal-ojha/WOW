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
    //Reaching up to last node & Deleting the Last
    temp=start;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);

    //Printing the modified Link list
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
