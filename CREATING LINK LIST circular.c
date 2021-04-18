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
    for(i=0;i<=10;i++)
    {
        new=(node*)malloc(sizeof(node));
        new->a=i;
        if(start==NULL)
        {
            start=new;
            new->next=start;
        }
        else
        {
            temp=start;
            while(temp->next!=start)
                temp=temp->next;
            temp->next=new;
            new->next=start;
        }
    }
    temp=start;
    while(temp->next!=start)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    printf("%d",temp->a);
    return 0;
}
