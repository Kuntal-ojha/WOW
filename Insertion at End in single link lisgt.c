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
    for(i=0;i<=10;i++)
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
    //Creating a node
    printf("Enter a number which you want to insert : ");
    scanf("%d",&num);
    new=(node*)malloc(sizeof(node));
    new->a=num;
    new->next=NULL;

    //Inserting at Ending position
    temp=start;
    for(i=0;i<10;i++)
        temp=temp->next;
    temp->next=new;

    //Printing the modified Link list
    temp=start;
    while(temp!=NULL)
    {
        printf("%d->",temp->a);
        temp=temp->next;
    }
    return 0;
}
