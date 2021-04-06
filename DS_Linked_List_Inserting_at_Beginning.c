// Linked List:Inserting a node at beginning.
// Created by KUNTAL OJHA RAJ on 2/4/2021.
// Simple Program about linked list.
// uncompleted program.....
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
typedef struct Node Node;
void Insert(int data);
void Print();
struct Node
{
    int date;
    struct Node* next;
};
struct Node* head; // Hear i declare a global variable
void Insert(int x)
{
    struct Node* temp=(Node*)malloc(sizeof(struct Node));
    temp->date=x;
    temp->next=NULL;
    head=temp;
}
void Print()
{
     struct Node* temp=head;
     printf("List is:");
     while(temp!=NULL)
     {
         printf("%d",temp->date);
         temp=temp->next;
     }
     printf("\n");
}
int main()
{
    int n,i,x;
    head=NULL;
    printf("How many numbers?\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    getch();
}

