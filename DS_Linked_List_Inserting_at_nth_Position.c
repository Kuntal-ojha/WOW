// Linked List: Inserting a note at nth position.
// Created by KUNTAL OJHA RAJ on 2/4/2021.
// UNCOMPLETED PROGRAM.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void Insert(int data,int n);
void Print();
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data,int n)
{
    struct Node* temp=(struct Node*)malloc(sizeof (struct Node*));
    temp->data=data;
    temp->next=NULL;
    if(n==1)
    {
        temp->next=head;
        head=temp;
        return;
    }
    struct Node* temp2=head;
    for (int i = 0; i <n-2 ; i++) {
        temp2=temp2->next;
    }
    temp->next=temp2->next;
    temp2->next=temp;
}


void Print()
{
    struct Node* temp=head;
    printf("List is:");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    head=NULL;
    Insert(2,1);
    Insert(5,2);
    Insert(6,3);
    Insert(7,4);
    Insert(8,5);
    Print();
}


